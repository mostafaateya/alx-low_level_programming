#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file
 * @letters: read letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x1, x2, x3;
	char *c;

	x1 = open(filename, O_RDONLY);
	if (x1 == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	x3 = read(x1, c, letters);
	x2 = write(STDOUT_FILENO, c, x3);
	free(c);
	close(x1);
	return (x2);
}
