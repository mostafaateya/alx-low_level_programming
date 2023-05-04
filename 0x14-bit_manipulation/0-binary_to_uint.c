#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input in a string type
 * Return: unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base10 = 0;
	int z;

	if (!b)
		return (0);
	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		base10 = 2 * base10 + (b[z] - '0');
	}
	return (base10);
}
