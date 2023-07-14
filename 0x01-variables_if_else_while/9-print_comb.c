#include <stdio.h>
/**
 * main - prints all posible combinations of single digit numbers
 * Return: always a zero(success)
 */
int main(void)
{
int number;
	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
