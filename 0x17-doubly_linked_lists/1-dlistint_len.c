#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: head to the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int results;

	results = 0;

	if (h == NULL)
		return (results);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		results++;
		h = h->next;
	}

	return (results);
}
