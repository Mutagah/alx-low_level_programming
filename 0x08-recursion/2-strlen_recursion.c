#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - prints the length of the string recursively
 * @s: The input string to be measured length
 * Return: An integer which is the total length of the string
*/
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

