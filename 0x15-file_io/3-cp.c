#include "main.h"
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUFFER);
	if (!buffer)
		return (0);

	to = open(argv[1], O_RDONLY);
	print_err_98(to, buffer, argv[1]);
	from = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	print_err_99(from, buffer, argv[2]);
	do {
		r = read(to, buffer, BUFFER);
		if (r == 0)
			break;
		print_err_98(r, buffer, argv[1]);
		w = write(from, buffer, r);
		print_err_99(w, buffer, argv[2]);
	} while (w >= BUFFER);
	r = close(from);
	print_err_100(r, buffer);
	r = close(to);
	print_err_100(r, buffer);
	free(buffer);
	return (0);
}
/**
 * print_err_98 - std err with exit 98
 * @from:file from
 * @buffer:buffer
 * @argv:arguments
 */
void print_err_98(int from, char *buffer, char *argv)
{

	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * print_err_99 - stderr with exit 99
 * @from:file from
 * @buffer:buffer
 * @argv:argument
 */
void print_err_99(int from, char *buffer, char *argv)
{
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * print_err_100 - stderr with exit 100
 * @from:file from
 * @buffer:buffer
 */
void print_err_100(int from, char *buffer)
{
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from);
		free(buffer);
		exit(100);
	}
}
