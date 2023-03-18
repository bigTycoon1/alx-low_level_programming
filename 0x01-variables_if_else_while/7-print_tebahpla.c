#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription:"prints the lowercase alphabet in reverse"
  *Return: always 0 (success)
  */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
