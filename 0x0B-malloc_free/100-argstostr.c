#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: count of the argument supplied
 * @av: argument vector of pointer to the string
 *
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		while (av[x][y])
		{
			ch++;
			y++;
		}
		y = 0;
		x++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[z] = av[x][y];
			z++;
			y++;
		}
		s[z] = '\n';
		y = 0;
		z++;
		x++;
	}
	z++;
	s[z] = '\0';
	return (s);
}
