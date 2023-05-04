#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: inbut value
 * @index: bit index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int Bit_Value;

	if (index > 63)
		return (-1);
	Bit_Value = (n >> index) & 1;
	return (Bit_Value);
}
