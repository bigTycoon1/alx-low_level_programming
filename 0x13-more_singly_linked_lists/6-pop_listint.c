#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of listint_t linked list
 * @head: ptr that point  th the head of listint_t list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
	}

	return (n);
}
