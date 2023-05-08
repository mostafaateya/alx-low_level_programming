#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the text file
 * @text_content: pointer to string added to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x1, x2, a = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}
	x1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x2 = write(x1, text_content, a);
	if (x1 == -1 || x2 == -1)
		return (-1);
	close(x1);
	return (1);
}
