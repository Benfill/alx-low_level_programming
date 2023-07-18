#include "main.h"

/**
 * _abs - print the absolute value
 * @int: the number
 * Return: the absolute value
 */

int	_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
