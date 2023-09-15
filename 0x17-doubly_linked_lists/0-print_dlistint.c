#include "lists.h"

/**
 * print_dlistint - prints the elements of dlistint_t list
 * @h: head to the lists
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int results;

	results = 0;

	if (h == NULL)
		return (results);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		results++;
		h = h->next;
	}

	return (results);
}
