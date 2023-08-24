#include "lists.h"

/**
 * list_len - Prints the number of nodes in the list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

