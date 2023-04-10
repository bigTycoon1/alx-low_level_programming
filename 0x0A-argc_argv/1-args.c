#include "main.h"
#include <stdio.h>
/**
  *main - program that prints the number of arguments passed into it
  *@argc: arguments to count
  *@argv: arrays of argument
  *
  *Return: zero
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}
