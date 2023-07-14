#include <stdio.h>
/**
 * main - printing alphabets except e and q
 * Return: always a zero (success)
 */
int main(void)
{
char alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	alphabet++;
	}
	putchar('\n');
	return (0);
}
