#include "main.h"
/**
 * reverse_array - reverses integers in an array
 * @a: pointer to the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
