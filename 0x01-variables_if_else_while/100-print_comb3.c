#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int num1, num2;

	num1 = 48;
	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			if (!((num1 == num2) || (num2 > num1)))
			{
			putchar(num1);
			putchar(num2);
			num2++;
				if (!(num1 == '9' && num2 == '8'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
		num1++;

	}
	putchar('\n');

	return (0);
}
