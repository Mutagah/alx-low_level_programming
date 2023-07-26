#include "main.h"
#include <string.h>
/**
 *
 *
 */
void print_rev(char *s)
{
	int word_count = strlen(s);	
	while ( word_count >= 0)
	{
		_putchar(s[word_count]);
		word_count--;
	}
	_putchar('\n');
}

	
