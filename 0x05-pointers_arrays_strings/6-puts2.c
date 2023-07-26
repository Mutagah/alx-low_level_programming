#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
void puts2(char *str)
{
	int counter;
	int string_length = strlen(str);
	for (counter = 0; counter <= string_length; counter++)
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
	}
	_putchar('\n');
}
