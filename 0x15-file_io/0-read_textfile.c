#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_byte, read_byte, w_byte;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	open_byte = open(filename, O_RDONLY);
	read_byte = read(open_byte, buffer, letters);
	w_byte = write(STDOUT_FILENO, buffer, read_byte);

	if (open_byte == -1 || read_byte == -1 || w_byte == -1 || w_byte != read_byte)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(open_byte);
	return (w_byte);
}
