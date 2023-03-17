#include <stdio.h>
/**
  *main - Entry point
  *Discription:"prints the alphabet in lowercase, and then in uppercase"
  *Return: Always 0(success)
  */
int main(void)
{
	int x = 97;
	int z = 65;

	while (x <= 122)
	{
		putchar(x);
	}
	while (z <= 90)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
