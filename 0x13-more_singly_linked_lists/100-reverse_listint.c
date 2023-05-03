#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the first node in the listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = 0;
	listint_t *y = 0;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;

	return (*head);
}
