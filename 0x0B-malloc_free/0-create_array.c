#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: the initialization char
 * Return: pointer to array - NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *cc;
	unsigned int i;

	cc = malloc(sizeof(char) * size);
	if (size == 0 || cc == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		cc[i] = c;
	return (cc);
}
