#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: the pointer that point to the list_t list
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *result;

	while (head)
	{
		result = head;
		head = head->next;
		free(result->str);
		free(result);
	}

	free(head);
}
