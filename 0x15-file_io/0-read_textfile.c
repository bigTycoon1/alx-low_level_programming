#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: the text file to be read
 * @letters: the number of letters to read and print
 *
 * Return: actual number of letters it could read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_file;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	read_file = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, read_file);

	free(buff);
	close(fd);
	return (read_file);
}
