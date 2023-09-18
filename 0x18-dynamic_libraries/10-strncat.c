#include "main.h"
int _strlen(char *s);
/**
  * _strncat -  function that concatenates two strings
  * @dest: destination array
  * @src: the array to be copied into dest
  * @n: number of element
  *
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = _strlen(dest);
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a++] = src[b++];
	}
	if (dest == 0 || src == 0)
	{
		return (0);
	}
	dest[a] = '\0';
	return (dest);
}
