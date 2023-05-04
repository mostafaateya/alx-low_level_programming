#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: inbut value
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int z;
	int x = 0;

	for (z = 63; z >= 0; z--)
	{
		num = n >> z;
		if (num & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
