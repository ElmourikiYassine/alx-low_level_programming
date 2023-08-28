#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Value stored in the head node.
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	node = temp->n;

	free(temp);

	*head = next;

	return (node);
}

