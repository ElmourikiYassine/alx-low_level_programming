#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) of a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data in the list.
 */
int sum_listint(listint_t *head)
{
	/* Initialize a pointer to traverse the list */
	listint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	/* Traverse the list and calculate the sum */
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

