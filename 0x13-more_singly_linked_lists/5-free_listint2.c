#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
