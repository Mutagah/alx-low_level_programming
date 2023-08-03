#include "main.h"
/**
 * _sqrt_generation - Recursively looks for a the square root of n
 * @n: The number to check for its natural sqrt
 * @root: The root that increments with one gradually
 * Return: Integer, which is the root or -1
 */
int _sqrt_generation(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (_sqrt_generation(n, root + 1));
}
/**
 * _sqrt_recursion - checks if n is less than 0 else the sqrt is generated
 * @n: The number to check its natural sqrt
 * Return: Invokes the sqrt_generation function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_generation(n, 0));
}
