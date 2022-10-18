#include <stdio.h>

/**
 * main - Prints alpha in lower case and upper case
 * Return: Always 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);

	putchar('\n');

	return (0);
}
