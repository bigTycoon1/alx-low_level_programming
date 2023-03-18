#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry points
  *Distribution:"single digit"
  *Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
