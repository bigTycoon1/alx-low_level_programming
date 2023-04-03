#include "main.h"
/**
  *_memset - function that fills memory with a constant byte
  *@s: pointer to the memory availble to be filed
  *@b: appropraite constanst byte value
  *@n: the first bytes of the memory area pointed to by s
  *
  *Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
