#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of deleted node
 * Return: 1 for success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *node = NULL;
	unsigned int a;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	for (a = 0; a < index - 1; a++)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
	}
	node = x->next;
	x->next = node->next;
	free(node);
	return (1);
}
