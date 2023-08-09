#include "main.h"

/**
 * append_text_to_file - function that appends text at end of a file.
 * @filename: pointer to the file name.
 * @text_content: string to add at the end of the file.
 *
 * Return: if fails or filename is NULL -1.
 *         if file does'nt exist the user lacks write permissions -1.
 *         Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
		len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
	return (-1);
	}
	close(o);

	return (1);
}
