#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to prints all the elements of a listint_t list.
 * @h: pointer to head of the listint_t list
 *
 * Return: number of nodes of the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	int result = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			result++;
		}
	}

	return (result);
}
