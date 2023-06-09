#include "main.h"
/**
  * _strncpy -  function that copies a string
  * if (n > src), it will pad n - src of 0's to the dest,
  * @dest: the destination string
  * @src: the string to be copied
  * @n: number of text to be copied
  *
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	while (n--)
	{
		*(dest + i++) = '\0';
	}
	return (dest);
}
