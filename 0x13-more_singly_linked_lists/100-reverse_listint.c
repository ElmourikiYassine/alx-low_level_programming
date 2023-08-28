#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Initialize pointers for node manipulation */
	listint_t *prev_node = NULL;
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;  /* Store the next node */
		current_node->next = prev_node;  /* Reverse the link */
		prev_node = current_node;        /* Move prev_node to current_node */
		current_node = next_node;        /* Move current_node to next_node */
	}

	/* Now prev_node points to the new head of the reversed list */
	*head = prev_node;

	return (*head);
}

