#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - program that prints the minimum number of coins
  *@argc: arguments to counts
  *@argv: arrays of arguments
  *
  *Return: 0 on succes, 1 on error
  */
int main(int argc, char *argv[])
{
	int i, cents, sum_coins = 0;
	int  coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		int num = cents / coins[i];

		sum_coins += num;
		cents = cents - num * coins[i];
	}
	printf("%d\n", sum_coins);
	return (0);
}
