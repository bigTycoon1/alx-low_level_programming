#include "main.h"
/**
 * *_strcpy - function that copies the string pointed
 * @dest: data type string
 * @src: data type string
 *
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
