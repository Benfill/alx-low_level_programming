#include	"variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator:  is the string to be printed between strings
 * @n: number of arguments
 * Return: void
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	char		*str;
	va_list		p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
	}
}
