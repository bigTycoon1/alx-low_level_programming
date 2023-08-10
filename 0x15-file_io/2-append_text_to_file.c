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
	int open_bytes, w_bytes, lenght = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[lenght] != '\0')
		lenght++;
	}
	open_bytes = open(filename, O_WRONLY | O_APPEND);
	if (open_bytes == -1)
	return (-1);

	w_bytes = write(open_bytes, text_content, lenght);
	if (w_bytes == -1)
	{
	return (-1);
	}
	close(open_bytes);

	return (1);
}
