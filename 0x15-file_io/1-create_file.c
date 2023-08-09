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
	int o, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
	len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
	return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
	close(o);
	return (-1);
	}
	close(o);

	return (1);
}
