#include "main.h"
/**
  *_memcpy -  function that copies memory area
  *@dest: destination to be copied to
  *@src: memory area where n bytes is copied
  *@n: part of bytes in memory area src
  *
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
