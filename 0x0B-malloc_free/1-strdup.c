#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: needed char input
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cc;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	cc = malloc(sizeof(char) * (len + 1));

	if (cc == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cc[i] = str[i];

	return (cc);
}
