#include "main.h"
#include <string.h>
/**
 * char *_strncpy - copies data
 * @dest: Destination of the copied data
 * @src: Source of the data to be copied
 * @n: Number of bytes to be copied
 * Return: Whatever characters is stored in the destination address
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
