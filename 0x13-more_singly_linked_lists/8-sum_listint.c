#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function to return the sum of all data (n) of listint_t list
 * @head: pointer that point to the listint_t linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
