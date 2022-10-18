#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num2 <= 9)
	{
		while (num1 <= 9)
		{
			if (!((num1 == num2) || (num2 > num1)))
			{
			putchar(num2);
			putchar(num1);
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
