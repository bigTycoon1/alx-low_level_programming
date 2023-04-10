#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
  *main - program that adds positive numbers
  *@argc: arguments to count
  *@argv: array to argument
  *
  *Return: zero
  */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
