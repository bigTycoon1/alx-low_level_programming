#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Discription: " print the last digit of the number"
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
		printf("last digit of %d of %d and is  greater than 5", n, ln);
	}
	else if (ln == 0)
	{
		printf("last digit of %d of %d and is 0", n, ln);
	}
	else
	{
		printf("last digit of %d of %d and is less than 6 and not 0", n, ln);
	}
	return (0);
}

