#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - function that prints anything
 * @format: type of argument listed
 *
 */
void print_all(const char * const format, ...)
{
	va_list x;
	unsigned int i;
	char *str, *separator;

	va_start(x, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(x, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(x, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(x, double));
				break;
			case 's':
				str = va_arg(x, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(x);
}
