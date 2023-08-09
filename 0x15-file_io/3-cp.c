#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - read 1024 bytes for a buffer.
 * @file: file buffer is storing chars for.
 *
 * Return: pointer to the newly buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Can't allocate memory for buffer in %s\n", file);
	exit(99);
	}

	return (buffer);
}
/**
 * close_file - file descriptor to close.
 * @fd: file descriptor.
 */
void close_file(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d\n", fd);
	exit(100);
	}
}
/**
 * main - copies the contents of a file to another file.
 * @argc: number of arguments to be supplied.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0.
 *
 * Description: if the argument count is incorrect - exit code 97.
 *              if file_from does not exist or cannot be read - exit code 98.
 *              if file_to cannot be created or written to - exit code 99.
 *              if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
	fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
	if (from == -1)
	{
	fprintf(stderr, "Error: Can't open file %s for reading\n", argv[1]);
	free(buffer);
	exit(98);
	}
	
	r = read(from, buffer, 1024);
	if (r == -1)
	{
	fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	close_file(from);
	exit(98);
	} 
	if (to == -1)
	{
	fprintf(stderr, "Error: Can't open file %s for writing\n", argv[2]);
	free(buffer);
	close_file(from);
	exit(99);
	}

	w = write(to, buffer, r);
	if (w == -1) {
	fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
	free(buffer);
	close_file(from);

	close_file(to);
	exit(99);
	}

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
