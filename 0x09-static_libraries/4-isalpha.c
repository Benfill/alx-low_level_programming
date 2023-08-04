#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 * @c: c is a charcter
 * Return: 1 if c is a letter otherways 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
