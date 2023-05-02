#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *x = head;

	while (x)
	{
		s += x->n;
		x = x->next;
	}
	return (s);
}
