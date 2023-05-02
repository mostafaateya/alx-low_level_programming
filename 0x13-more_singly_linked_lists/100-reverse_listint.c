#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node
 * Return: pointer to new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
