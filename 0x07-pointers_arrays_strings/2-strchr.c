#include "main.h"
/**
  *_strchr - function that locates a character in a string
  *@c: input
  *@s: string values
  *
  *Return: Always 0
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
		if (c == '\0')
		{
			return (s);
		}
	return (0);
}
