#include <stdio.h>

/**
 * main - Prints all the combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar (',');
			putchar (' ');
		}
		putchar('\n');

		return (0);
	}
}
