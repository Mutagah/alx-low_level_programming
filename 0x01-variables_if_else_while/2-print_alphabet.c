#include <stdio.h>
/**
 * main - printing chracters from a to z
 * Return: always a zero
 */
int main(void)
{
char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
