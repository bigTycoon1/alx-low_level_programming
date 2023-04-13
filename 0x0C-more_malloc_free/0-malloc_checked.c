#include "main.h"
/**
 * malloc_checked - function allocates memory using malloc
 * @b: allocated number to memory
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
