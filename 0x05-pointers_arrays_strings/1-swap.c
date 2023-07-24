#include	"main.h"

/**
 * swap_int - swaping two integers values
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int	swap;

	swap =	*a;
	*a =	*b;
	*b =	swap;
}
