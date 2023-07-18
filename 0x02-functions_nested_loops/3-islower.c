#include "main.h"

/**
 * int _islower - check if c is lowercase
 * Return: 1 if c lowercase or 0 if its not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
