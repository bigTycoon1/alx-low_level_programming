#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to point to the listint_t linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 1;
	listint_t *count = *head, *tmp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = count->next;
		free(count);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if (x == index)
		{
			count = tmp->next;
			tmp->next = count->next;
			free(count);
			return (1);
		}

		tmp = tmp->next;
		x++;
	}

	return (-1);
}
