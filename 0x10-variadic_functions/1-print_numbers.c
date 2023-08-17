#include	"variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:  is the string to be printed between numbers
 * @n: number of arguments
 * Return: void
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	int		nbr;
	va_list		p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		nbr = va_arg(p, int);
		if (separator == NULL || i + 1 == n)
			printf("%d", nbr);
		else
			printf("%d%s", nbr, separator);
	}
	va_end(p);
	putchar('\n');
}
