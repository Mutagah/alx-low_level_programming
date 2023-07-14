#include <stdio.h>
/**
 * main - prints the alphabets in reverse
 * Return: always zero (success)
 */
int main(void)
{
char alphabet;
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
