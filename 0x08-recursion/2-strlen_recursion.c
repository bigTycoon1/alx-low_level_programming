#include "main.h"
/**
  * _strlen_recursion - function that returns the length of a string
  * @s: the string to be measured
  *
  * Return: the lenght of the sting should be returned
  */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
