#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function to add new node to beginning of a listint_t list
 * @head: pointer that point to head of the listint_t list
 * @n: number to add to the new node of a new listint_t list
 *
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *count;

	if (head != NULL)
	{
		count = malloc(sizeof(listint_t));
		if (count == NULL)
			return (NULL);

		count->n = n;
		count->next = *head;
		*head = count;

		return (count);
	}

	return (NULL);
}
