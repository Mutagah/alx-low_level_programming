#include "main.h"
#include <string.h>
/**
 * char *_strncat - Appends src to dest while adhering to int n bytes.
 * @dest: destination of the new formed text
 * @src: source of the text to be appended
 * @n: number of bytes to be appended
 * Return: dest which is the new formed text is returned
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
