#include "lists.h"

/**
 * sum_listint - calcu the sum of all data in listint_t list
 * @head: pointer to the first node
 * return: sum
 */

int sum_listint(listint_t *head)
{
	int s;
	listint_t *x = head;

	for (s = 0; x = x->next; s++)
		s += x->n;

	return (s);
}
