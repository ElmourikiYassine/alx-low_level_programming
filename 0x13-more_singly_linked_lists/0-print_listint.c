#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	/* Initialize a counter for the number of nodes */
	int i = 0;

	/* Traverse the list and print each node's value */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	/* Return the number of nodes */
	return (i);
}

