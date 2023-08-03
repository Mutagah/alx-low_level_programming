#include "main.h"
/**
 * prime_checker - checks if n is a prime number
 * @n: The number to be checked
 * @i: Gradually decreasing number that divides our given number
 * Return: 1 if n is prime and 0 if n isn't prime
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_checker(n, i - 1));
}
/**
 * is_prime_number - checks if n is less than 1 else passes to prime_checker
 * @n: The input number to be ckecked if is prime
 * Return: The integer resulting from prime_checker
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}
