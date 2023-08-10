#include "main.h"

/**
 * create_file - function to creates a file.
 * @filename: pointer to the filename to create.
 * @text_content: pointer to a string to write the file.
 *
 * Return: if the function fails -1.
 *         else  1.
 */
int create_file(const char *filename, char *text_content)
{
	int open_bytes, w_bytes, lenght = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[lenght] != '\0')
	lenght++;
	}

	open_bytes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (open_bytes == -1)
	return (-1);

	w_bytes = write(open_bytes, text_content, lenght);
	if (w_bytes == -1)
	{
	close(open_bytes);
	return (-1);
	}
	close(open_bytes);

	return (1);
}
