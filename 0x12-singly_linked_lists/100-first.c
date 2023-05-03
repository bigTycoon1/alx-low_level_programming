#include <stdio.h>
#include "lists.h"
void first(void) __attribute__ ((constructor));
/**
 * first - function that prints, before the main function is executed
 *
 * Return: always 0
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
