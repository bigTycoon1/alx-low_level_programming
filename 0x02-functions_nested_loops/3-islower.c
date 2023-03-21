#include "main.h"
/**
 *3-islower - function that checks for lowercase character
 *@c: pararameter to be printed
 *
 *Return: 1 if it is in lowercase
 *and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
