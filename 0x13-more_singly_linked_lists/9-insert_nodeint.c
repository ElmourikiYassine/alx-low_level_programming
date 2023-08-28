#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Initialize pointers for traversal */
	listint_t *node;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	int i = 0;

	if (head == NULL || new_node == NULL)
		return (NULL);

	node = *head;

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = node;
		*head = new_node;

		return (new_node);
	}

	/* Traverse the list */
	while (node != NULL)
	{
		listint_t *next_node = node->next;

		if (i == (int)idx - 1)
		{
			new_node->n = n;
			node->next = new_node;
			new_node->next = next_node;

			return (new_node);
		}

		node = node->next;
		i++;
	}

	return (NULL);
}

