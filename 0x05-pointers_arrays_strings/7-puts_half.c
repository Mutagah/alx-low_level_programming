#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: The string that would be splitted and printed the last half bit
 */
void puts_half(char *str)
{
	int length = strlen(str) - 1;

	int plength = length % 2 == 0 ? (length / 2) : ((length + 1) / 2);

	for (; plength <= length; plength++)
		_putchar(str[plength]);
	_putchar('\n');
}
