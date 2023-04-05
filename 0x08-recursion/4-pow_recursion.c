#include "main.h"

/**
 * _pow_recursion - needed function that returns a value to a specific power
 * @x: first needed input
 * @y: second needed input
 * Returns: needed output (the result of the power)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
