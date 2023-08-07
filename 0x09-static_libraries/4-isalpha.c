#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character involved in checking
 * Return: 1 is c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
