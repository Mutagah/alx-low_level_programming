#include <ctype.h>
#include "main.h"
/**
 * _islower - checks whether the character is a lowercase or an uppercase
 * @c: the character to be checked
 * Return: 1 if the character is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
