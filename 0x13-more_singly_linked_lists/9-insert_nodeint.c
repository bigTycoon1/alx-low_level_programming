#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at given position
 * @head: pointer that point to the listint_t list
 * @idx: index of the list where the new node should be added
 * @n: number of the listint_t list
 *
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *value;
	listint_t *result;
	unsigned int x = 1;

	if (head)
	{
		value = malloc(sizeof(listint_t));
		if (value == NULL)
			return (NULL);

		value->n = n;
		if (idx > 0)
		{
			result = *head;
			while (result)
			{
				if (x == idx)
				{
					value->next = result->next;
					result->next = value;
					return (value);
				}
				result = result->next;
				x++;
			}
			if (idx > x)
				return (NULL);
		}
		else
		{
			value->next = *head;
			*head = value;
		}
		return (value);
	}
	return (NULL);
}
