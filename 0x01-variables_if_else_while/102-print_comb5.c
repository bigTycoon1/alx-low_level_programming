#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription:"prints all possible combinations of two two-digit numbers"
  *Return: always 0 (success)
  */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y < 99; y++)
		{
			if (x < y && x != y)
			{
				putchar((x / 10) + 0);
				putchar((x % 10) + 0);
				putchar(' ');
				putchar((y / 10) + 0);
				putchar((y % 10) + 0);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
