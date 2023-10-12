#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all data, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum_nodes = 0;
	dlistint_t *iter = head;

	while (iter != NULL)
	{
		sum_nodes += iter->n;
		iter = iter->next;
	}
	return (sum_nodes);
}
