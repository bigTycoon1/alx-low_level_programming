#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription:"prints all single digit numbers of base 10 starting from 0"
  *Return: always 0 (success)
  */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	return (0);
}


