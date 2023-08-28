#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a pointer to traverse the list */
	listint_t *node = head;
	int i = 0;

	if (head == NULL)
		return (NULL);

	/* Traverse the list */
	while (node != NULL)
	{
		if (i == (int)index)
			return (node);

		node = node->next;
		i++;
	}

	return (NULL);
}

