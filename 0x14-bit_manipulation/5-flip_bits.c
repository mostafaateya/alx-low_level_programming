#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first inbut
 * @m: second inbut
 * Return: bits number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, num1 = n ^ m;
	int z;
	int a = 0;

	for (z = 63; z >= 0; z--)
	{
		num = num1 >> z;
		if (num & 1)
			a++;
	}
	return (a);
}

