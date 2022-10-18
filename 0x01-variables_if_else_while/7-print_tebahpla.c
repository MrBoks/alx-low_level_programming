#include <stdio.h>

/**
 * main - Print the alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
		putchar(rv);

	putchar('\n');

	return (0);
}
