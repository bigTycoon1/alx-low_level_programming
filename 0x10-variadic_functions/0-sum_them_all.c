#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its parameters
 * @n: the number of parameters to the function
 *
 * Return: total sum of the parammeters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (x < n)
		{
			sum += va_arg(args, int);
			x++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
