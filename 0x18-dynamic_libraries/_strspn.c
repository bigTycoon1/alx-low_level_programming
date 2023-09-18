#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: initial segment
  *@accept: byte of an input
  *
  *Return: always zero
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
