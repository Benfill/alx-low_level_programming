#include "main.h"

/**
 * _islower - check if c is lowercase
 * parameter c - is the charcter that it'll be checked
 * Return: 1 if c lowercase or 0 if its not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
