#include <stdio.h>
/**
 * main - prits alphabets in lowercase then later in uppercase
 * Return: always a zero(success)
 */
int main(void)
{
char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
return (0);
}
