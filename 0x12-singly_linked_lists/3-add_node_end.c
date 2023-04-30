#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: the pointer that point to the list_t list
 * @str: string to the node
 *
 * Return: address of the new list or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}

	return (NULL);
}

/**
 * _strlen - function to the length of a string
 * @str: number of string to count
 *
 * Return: Strlen
 */
int _strlen(const char *str)
{
	int count = 0;

	while (*str)
	{
		str++;
		count++;
	}

	return (count);
}
