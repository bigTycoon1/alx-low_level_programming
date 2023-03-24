#include <stdio.h>
/**
  *main - entry point
  *Discription: "prints the numbers from 1 to 100"
  *
  *Return: always 0 (success)
  */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}

