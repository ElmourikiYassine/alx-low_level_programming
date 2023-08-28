#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list to be freed.
 */
void free_listint2(listint_t **head)
{
	/* Start from the head of the list */
	listint_t *tail = *head;

	if (head == NULL)
		return;

	/* Traverse the list and free each node */
	while (tail->next != NULL)
	{
		listint_t *temp = tail;

		tail = tail->next;
		free(temp);
	}

	/* Free the last node and set the head to NULL */
	*head = NULL;
	free(tail);
}

