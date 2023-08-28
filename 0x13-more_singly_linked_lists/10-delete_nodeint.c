#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Initialize pointers for traversal */
	listint_t *node;
	int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	/* Traverse the list */
	while (node != NULL)
	{
		listint_t *next_node = node->next;

		if (i == (int)index - 1)
		{
			if (next_node == NULL)
				return (-1);

			node->next = next_node->next;
			free(next_node);
			return (1);
		}

		node = node->next;
		i++;
	}

	return (-1);
}

