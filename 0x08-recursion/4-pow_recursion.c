#include "main.h"

/**
 * _pow_recursion - calculates the power of the given numbers
 * @x: The base number
 * @y: The power number
 * Return: The calculated end  result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
