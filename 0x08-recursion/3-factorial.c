#include "main.h"
/**
 * factorial - Gets the factorial of a given number
 * @n: The number to get the factorial
 * Return: The factorial of the given input parameter/argurment
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
