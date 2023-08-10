#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);
	O = open(filename, O_RDONLY);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(O);
	return (W);
}
