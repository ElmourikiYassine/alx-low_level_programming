#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (head == NULL || new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	/* Traverse to the end of the list */
	while (tail->next != NULL)
		tail = tail->next;

	/* Initialize the new node */
	new_node->n = n;
	tail->next = new_node;
	new_node->next = NULL;

	return (new_node);
}

