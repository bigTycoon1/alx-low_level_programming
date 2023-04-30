#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - functions that adds a new node at the beginning of a list
 * @head: pointer to point the list_t list
 * @str: string to add to the node
 *
 * Return: address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *result;
	unsigned int count = 0;

	while (str[count])
		count++;
	result = malloc(sizeof(list_t));
	if (!result)
		return (NULL);

	result->str = strdup(str);
	result->len = count;
	result->next = (*head);
	(*head) = result;

	return (*head);
}
