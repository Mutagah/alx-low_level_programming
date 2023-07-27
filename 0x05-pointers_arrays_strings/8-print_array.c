#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements in an array
 * @n: The length of the given array
 * @a: The array itself
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		i != n - 1 ? printf("%d, ", a[i]) : printf("%d", a[i]);
	}
	printf("\n");
}
