#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps values of two declared variable
 * @a: pointer to variable a
 * @b: pointer to variable b
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
