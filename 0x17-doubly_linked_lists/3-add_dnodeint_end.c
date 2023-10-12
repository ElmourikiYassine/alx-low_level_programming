#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end_iter = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);


	while (end_iter != NULL && end_iter->next != NULL)
	{
		end_iter = end_iter->next;
	}

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = end_iter;
		end_iter->next = new;
		return (new);
	}
	return (NULL);
}
