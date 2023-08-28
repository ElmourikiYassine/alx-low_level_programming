#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	/* Initialize a counter for the number of nodes */
	int i = 0;

	if (h == NULL)
		return (i);

	/* Traverse the list and count each node */
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	/* Return the number of nodes */
	return (i);
}

