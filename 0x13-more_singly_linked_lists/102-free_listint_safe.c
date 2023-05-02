#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node
 * Return: number pf elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length;
	int z;
	listint_t *x;

	if (!h || !*h)
		return (0);
	for (length = 0; *h; length++)
	{
		z = *h - (*h)->next;
		if (z > 0)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (length);
}
