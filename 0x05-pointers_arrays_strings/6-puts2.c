#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints the second character in a string
 * @str: The input string that is to be splitted
 */
void puts2(char *str)
{
	int counter;
	int string_length = strlen(str) - 1;

	for (counter = 0; counter <= string_length; counter++)
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
	}
	_putchar('\n');
}
