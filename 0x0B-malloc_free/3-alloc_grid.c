#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **cc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	cc = malloc(sizeof(int *) * height);

	if (cc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		cc[i] = malloc(sizeof(int) * width);

		if (cc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(cc[i]);

			free(cc);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			cc[i][j] = 0;
	}

	return (cc);
}

