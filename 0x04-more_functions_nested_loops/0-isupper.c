#include	"main.h"

/**
 * _isupper - function that checks if c is uppercase
 * @c: the charcter to be checked
 * Return: 1 if c is uppercase, Returns 0 otherwise
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
