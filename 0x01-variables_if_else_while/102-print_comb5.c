#include <stdio.h>
/**
 * main - returns sequential numbers in two pairs but under given conditions
 * Return: always a zero(success)
 */
int main(void)
{
int firstN, secondN, thirdN, fourthN;
	for (firstN = 48; firstN <= 57; firstN++)
	{
		for (secondN = 48; secondN <= 57; secondN++)
		{
			for (thirdN = 48; thirdN <= 57; thirdN++)
			{
				for (fourthN = 48; fourthN <= 57; fourthN++)
				{
					if (firstN < thirdN || (firstN == thirdN && secondN < fourthN))
					{
						putchar(firstN);
						putchar(secondN);
						putchar(' ');
						putchar(thirdN);
						putchar(fourthN);
					if (firstN != 57 || secondN != 56 || thirdN != 57 || fourthN != 57)
					{
					putchar(',');
					putchar(' ');
					}
					}
					}
					}
					}
					}
					putchar('\n');
					return (0);
					}
