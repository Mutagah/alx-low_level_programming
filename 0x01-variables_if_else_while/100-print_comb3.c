#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always returns zero(success)
 */
int main(void)
{
int firstNumber, secondNumber;
	for (firstNumber = 48; firstNumber < 57; firstNumber++)
	{
		for (secondNumber = 49; secondNumber <= 57; secondNumber++)
		{
			if (secondNumber > firstNumber)
			{
				putchar(firstNumber);
				putchar(secondNumber);
			if (firstNumber != 56 || secondNumber != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
