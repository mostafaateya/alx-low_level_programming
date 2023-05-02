#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: the new node position
 * @n: data inserting variable
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_element;
	listint_t *x = *head;

	new_element = malloc(sizeof(listint_t));
	if (!new_element || !head)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (idx == 0)
	{
		new_element->next = *head;
		*head = new_element;
		return (new_element);
	}
	for (a = 0; x && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_element->next = x->next;
			x->next = new_element;
			return (new_element);
		}
		else
			x = x->next;
	}
	return (NULL);
}

