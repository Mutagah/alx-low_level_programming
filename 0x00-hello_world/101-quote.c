#include <stdio.h>
#include <unistd.h>
/**
 * main - prints "and that piece of artis useful\" - Dora Korpar, 2015-10-19"
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}