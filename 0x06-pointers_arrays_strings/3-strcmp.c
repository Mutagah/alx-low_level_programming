#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: pointer to the first param
 * @s2: pointer to the second param
 * Return: Difference between the compared string
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] == s2[count] && (s1[count] != '\0' && s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
