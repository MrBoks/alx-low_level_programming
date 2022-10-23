#include "main.h"

/**
 * _islower - checks if a characte is lowercase
 * @c: the character
 * Return: 1 if the lettter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else return (0);
}
