#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head to the list
 *
 * Return: nothing to return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
