#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}

