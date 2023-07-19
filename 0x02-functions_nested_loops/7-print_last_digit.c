#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @number: where we get the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
int lastdigit = number % 10;
		_putchar(abs(lastdigit) + '0');
		return (abs(lastdigit));
}
