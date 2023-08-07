#include "main.h"
#include <string.h>
/**
 * char *_strcat - concatenates two strings
 * @dest: The pointer to the destination array of characters
 * @src: The string to be appended
 * Return: whatever is concatenated and stored in the destination address
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
