#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription:"print all the base 16"
  *Return: always 0 (success)
  */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
