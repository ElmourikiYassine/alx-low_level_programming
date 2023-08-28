#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Value stored in the head node.
 */
int pop_listint(listint_t **head)
{
	/* Store the value of the head node */
	listint_t *h = *head;
	int n = h->n;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Update the head and free the previous head node */
	*head = h->next;
	free(h);

	return (n);
}

