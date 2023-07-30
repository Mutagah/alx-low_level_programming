#include "main.h"
#include <string.h>
/**
 * string_toupper - converts all lowercase letters to uppercase letters
 * @s: parameter to be converted to upperacase
 * Return: The input string as in uppercase
 */
char *string_toupper(char *s)
{
	int count = 0, end_of_string = strlen(s);

	for (; count <=  end_of_string; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
			s[count] = s[count] - 32;
	}
	return (s);
}
