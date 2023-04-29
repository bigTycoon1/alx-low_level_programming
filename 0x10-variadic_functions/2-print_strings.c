#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of string to the function
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *str;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (x != n - 1 && separator != NULL)
				printf("%s", separator);

			x++;
		}

		va_end(args);
	}

	printf("\n");
}
