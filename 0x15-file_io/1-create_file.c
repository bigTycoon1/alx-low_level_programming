#include "main.h"
#include <stdlib.h>
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int text_file, bwr, len = 0;

	if (!filename)
		return (-1);

	text_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		bwr = write(text_file, text_content, len);
		if (bwr != len)
			return (-1);
	}

	close(text_file);

	return (1);
}
