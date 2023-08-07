#include "main.h"
#include <string.h>
/**
 * char *_strcpy - copies a string from src to dest
 * @dest: The destination of the copied string
 * @src: The source where the string is copied from
 * Return: whatever is copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
