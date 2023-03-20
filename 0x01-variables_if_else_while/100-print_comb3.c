#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription:"prints all possible different combinations of two digits"
  *Return: always 0 (success)
  */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for  (y = 49; y < 58; y++)
		{
			if  (y > x)
			{
				putchar(x);
				putchar(y);

				if ((x < 56) || (y < 56))
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

