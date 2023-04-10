#include <stdio.h>
#include "main.h"
/**
  *main - program that prints its name
  *@argv: array of the pointer to the string
  *@argc: number of argument to be count
  *
  *Return: zero
  */
int main(int argc, char *argv[])
{
	if (argc > 0)

	printf("%s\n", argv[0]);
	return (0);
}
