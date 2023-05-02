#include "lists.h"

/**
 * list_len - counts unique nodes
 * @head: pointer to the first node
 * Return: number of unique nodes
 */

size_t list_len(const listint_t *head)
{
	const listint_t *i, *j;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;
	while (j)
	{
		if (i == j)
		{
			i = head;
			for (; i != j; x++)
			{
				i = i->next;
				j = j->next;
			}
			i = i->next;
			for (; i != j; x++)
				i = i->next;
			return (x);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, i = 0;

	x = list_len(head);
	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; i < x; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}
