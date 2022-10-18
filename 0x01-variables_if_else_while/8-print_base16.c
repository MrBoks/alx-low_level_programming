#include <stdio.h>

/**
 * main - Prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char bs;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (bs = 'a'; bs <= 'f'; bs++)
		putchar(bs);

	putchar('\n');

	return (0);
}
