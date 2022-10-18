#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * followed by a newline, skipping e and q
 * Return: Always 0
 */
int main(void)
{
	char lwcase;

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		if (lwcase != 'e' && lwcase != 'q')
			putchar(lwcase);
	}

	putchar('\n');

	return (0);
}
