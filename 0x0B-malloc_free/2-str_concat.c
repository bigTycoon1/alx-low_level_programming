#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: first string to char
 * @s2: second string to char
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int w, x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	a = malloc((w * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (w + x + 1); y++)
	{
		if (y < w)
			a[y] = s1[y];

		else
			a[y] = s2[z++];
	}

	return (a);
}
