#include <stdio.h>
/**
  *main - Entry point
  *Discription:"prints the alphabet in lowercase"
  *Return: Always 0 (success)
  */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
