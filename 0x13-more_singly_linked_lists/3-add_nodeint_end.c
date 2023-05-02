#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element
 * @n: data inserting variable
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *x = *head;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	while (x->next)
		x = x->next;
	x->next = new_element;
	return (new_element);
}
