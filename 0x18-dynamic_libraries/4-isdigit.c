#include "main.h"
/**
  * _isdigit -check if the numbers are 0 - 9
  * @c: char to check
  * Return: 0 0r 1
  */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
