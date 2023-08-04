#include "main.h"


/**
 * binary_to_uint -function to converts a binary num to an unsigned int.
 * @b: pointer to a string that contain a binary num
 *
 * Return: the converted num, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int rslt;

	rslt = 0;
	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		rslt <<= 1;
		if (b[a] == '1')
			rslt |= 1;
	}
	return (rslt);
}
