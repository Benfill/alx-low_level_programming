#include	"main.h"

/**
 * _isdigit - function checks if c is a digit
 * @c: the charcter to be checked
 * Return: 1 if c is a digit or returns 0 otherwise
 */

int	_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
