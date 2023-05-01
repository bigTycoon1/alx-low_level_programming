#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at end of listint_t list
 * @head: pointer that point to head of the listint_t list
 * @n: number to add to the end of the listint_t list
 *
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *count;
	listint_t *result;

	if (head)
	{
		count = malloc(sizeof(listint_t));
		if (count == NULL)
			return (NULL);

		count->n = n;
		count->next = NULL;

		if (*head == NULL)
		{
			*head = count;
			return (*head);
		}
		else
		{
			result = *head;
			while (result->next)
				result = result->next;

			result->next = count;
			return (result);
		}
	}

	return (NULL);
}
