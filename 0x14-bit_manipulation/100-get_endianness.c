#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int z = 1;
	char *a = (char *) &z;

	return (*a);
}
