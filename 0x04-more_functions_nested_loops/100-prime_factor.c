#include <stdio.h>
#include <math.h>
/**
  *main - prints the largest prime factor of the number
  *Discription: "The prime factors of 1231952"
  *
  *Return: largest prime number
  */

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
		{
			printf("%d\n", a);
		}
	}
	return (0);
}
