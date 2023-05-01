#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function to return the number of elements in listint_t list
 * @h: pointer that point to listint_ list
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	while (h)
	{
		h = h->next;
		result++;
	}
	return (result);
}
