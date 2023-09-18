#include "main.h"
/**
  *_abs - function that computes the absolute value of an integer
  *@a: parameter function
  *
  *Return: value of an integer
  */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
