#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffering(char *filename);
void closing(int z);

/**
 * buffering - create buffer for 1024 bytes
 * @filename: name of the text file
 * Return: pointer to buffer
 */

char *buffering(char *filename)
{
	char *c;

	c = malloc(sizeof(char) * 1024);
	if (c == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (c);
}

/**
 * closing - closes a file
 * @z: flag for closing file
 */

void closing(int z)
{
	int i;

	i = close(z);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close z %d\n", z);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of the arguments
 * @argv: array of pointers to the arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a1, a2, x1, x2;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = buffering(argv[2]);
	a1 = open(argv[1], O_RDONLY);
	x1 = read(a1, c, 1024);
	a2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a1 == -1 || x1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(c);
			exit(98);
		}
		x2 = write(a2, c, x1);
		if (a2 == -1 || x2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}
		x1 = read(a1, c, 1024);
		a2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (x1 > 0);
	free(c);
	closing(a1);
	closing(a2);
	return (0);
}
