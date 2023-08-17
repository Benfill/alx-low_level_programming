#include	"variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of args
 * Return: sum of all params
 */

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	int		sum;
	va_list		p;

	sum =	0;
	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
