#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in lonked list
 * @head: First node
 * @index: index of the node
 * Return: Poiinter to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *x = head;

	for (a = 0; x && a < index; a++)
		x = x->next;
	if (x)
		return (x);
	else
		return (NULL);
}
