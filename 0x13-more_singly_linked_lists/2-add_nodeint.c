#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: data inserting variable
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
