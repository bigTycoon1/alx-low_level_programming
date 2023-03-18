#include <stdlib.h>
#include  <stdio.h>
/**
  *main - entry point
  *Discription:"prints the alphabet in lowercase"
  *Return: always 0 (success)
  */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
		continue;
		}
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);

}
