#include "lists.h"

/**
 * print_listin - prints all the elements of a listint_t list
 * @h: linked list of type listint_t
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
