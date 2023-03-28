#include "main.h"
/**
  *rev_string - function that reverses a string
  *@s: string to be print
  *
  *Return: 0
  */
void rev_string(char *s)
{
	int i, z, half;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		z = 0;
	half = i / 2;

	while (half--)
	{
		temp = s[i - z - 1];
		s[i - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
