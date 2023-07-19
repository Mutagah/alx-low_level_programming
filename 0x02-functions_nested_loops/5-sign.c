#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the paratemer subjected to a check
 * Return: 1 when n greater than zero
 * 0 when n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar(45);
	}
	return (-1);
}
