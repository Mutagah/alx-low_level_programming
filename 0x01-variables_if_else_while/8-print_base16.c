#include <stdio.h>
/**
 * main - prints the hexadecimal characters
 * Return: always zero(success)
 */
int main(void)
{
int number;
	for (number = 48; number <= 57; number++)
		putchar(number);
	for (number = 97; number <= 102; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
