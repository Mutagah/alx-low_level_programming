#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks whether the input character is a character in uppercase
 * @c: symbolizes the input argurment
 * Return: returns 1 if the character is capital and zero if not
 */

int _isupper(int c)
{
return ((c <= 'Z' && c >= 'A') ? 1 : 0);
}
