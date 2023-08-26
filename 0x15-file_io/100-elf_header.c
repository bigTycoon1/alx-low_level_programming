#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ch_elf(unsigned char *e_ident);
void pr_magic(unsigned char *e_ident);
void pr_class(unsigned char *e_ident);
void pr_data(unsigned char *e_ident);
void pr_version(unsigned char *e_ident);
void pr_abi(unsigned char *e_ident);
void pr_osabi(unsigned char *e_ident);
void pr_type(unsigned int e_type, unsigned char *e_ident);
void pr_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
/**
 * ch_elf - file  to check if it's an ELF file.
 * @e_ident: pointer to an array to contain the ELF
 *
 * Description: if file failed to be ELF file - exit code 98.
 */
void ch_elf(unsigned char *e_ident)
{
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 0x7F &&
			e_ident[i + 1] != 'E' &&
			e_ident[i + 2] != 'L' &&
			e_ident[i + 3] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}

	}
}

/**
 * pr_magic - prints the magic num of ELF.
 * @e_ident: pointer to an array that contain the magic num.
 *
 * Description: magic num to separated.
 */
void pr_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * pr_class - print ELF header class
 * @e_ident: pointer to an array that contain ELF header class.
 */
void pr_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * pr_data - prints ELF header data.
 * @e_ident: pointer to an array that contain data.
 */
void pr_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * pr_version - print an ELF header version.
 * @e_ident: pointer to an array that containing ELF version.
 */
void pr_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * pr_osabi - function to prints the OS/ABI of an ELF header.
 * @e_ident: pointer to an array that contain the ELF OS/ABI.
 */
void pr_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * pr_abi - function that prints ELF header ABI version.
 * @e_ident: pointer to an array that contain ELF ABI.
 */
void pr_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * pr_type - function that print an ELF header type.
 * @e_type: type of ELF.
 * @e_ident: pointer to an array of the ELF class type.
 */
void pr_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * pr_entry - function to print the entry point of an ELF.
 * @e_entry: the ELF entry point address.
 * @e_ident: pointer to an array to the ELF entry.
 */
void pr_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - function to closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: if the file can't be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - to give the information that should be in the
 *        ELF header at the beginning of ELF file.
 * @argc: number of arguments to be counted .
 * @argv: array of pointers to the argument vector.
 *
 * Return: 0.
 *
 * Description: if the file isn't an ELF File or
 *              if failed - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, byte_r;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	byte_r = read(fd, header, sizeof(Elf64_Ehdr));
	if (byte_r == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	ch_elf(header->e_ident);
	printf("ELF Header:\n");
	pr_magic(header->e_ident);
	pr_class(header->e_ident);
	pr_data(header->e_ident);
	pr_version(header->e_ident);
	pr_osabi(header->e_ident);
	pr_abi(header->e_ident);
	pr_type(header->e_type, header->e_ident);
	pr_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(fd);
	return (0);
}
