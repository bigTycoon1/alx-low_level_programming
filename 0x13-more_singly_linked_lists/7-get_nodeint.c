#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that return the nth node of a listint_t list
 * @head: pointer that point to the listint_t linked list
 * @index:  index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head)
	{
		while (head)
		{
			if (x == index)
				return (head);

			head = head->next;
			x++;
		}
	}

	return (NULL);
}
