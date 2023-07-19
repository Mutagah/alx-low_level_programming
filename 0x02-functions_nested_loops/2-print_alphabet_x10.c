#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 */
void print_alphabet_x10(void)
{
char alphabet;
int times = 1;
	while (times <= 10)
	{
		alphabet = 'a';
		while (alphabet < 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	_putchar('\n');
	times++;
	}
}
