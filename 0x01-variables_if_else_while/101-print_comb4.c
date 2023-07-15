#include <stdio.h>
/**
 * main - prints three digit possible combinations that are unique
 * Return: always a zero (success)
 */
int main(void)
{
int firstNumber, secondNumber, thirdNumber;
	for (firstNumber = 48; firstNumber <= 55; firstNumber++)
	{
		for (secondNumber = 49; secondNumber <= 56; secondNumber++)
		{
			for (thirdNumber = 50; thirdNumber <= 57; thirdNumber++)
			{
				if (thirdNumber > secondNumber && secondNumber > firstNumber)
				{
					putchar(firstNumber);
					putchar(secondNumber);
					putchar(thirdNumber);
				if (firstNumber != 55)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
putchar('\n');
return (0);
}
