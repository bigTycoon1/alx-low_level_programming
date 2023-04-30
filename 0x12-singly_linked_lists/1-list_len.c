#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that return the number of elements in linked list_t list
 * @h: pointer that point to the list_t list
 *
 * Return: number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		h = h->next;
		result++;
	}

	return (result);
}

