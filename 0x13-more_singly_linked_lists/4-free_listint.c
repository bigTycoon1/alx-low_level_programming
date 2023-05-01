#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: ptr to the head of the listint_h list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *result;

	while (head)
	{
		result = head;
		head = head->next;
		free(result);
	}

	free(head);
}
