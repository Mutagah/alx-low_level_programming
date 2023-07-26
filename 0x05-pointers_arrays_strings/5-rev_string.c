#include "main.h"
#include <string.h>
/**
 * rev_string - Reversal of a a given string
 * @s: The input string that is expected to be reversed
*/
void rev_string(char *s)
{
	int end = strlen(s) - 1;
	int start = 0;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
