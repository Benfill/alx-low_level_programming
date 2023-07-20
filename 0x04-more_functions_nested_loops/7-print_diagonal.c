#include	"main.h"

/**
 * print_diagonal - function that prints \ n times
 * @n: the number of times \ will be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int	i, j, k;

	i = n;
	j = 0;
	k = 0;
	while (n > 0)
	{
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		j++;
		k = j;
	}
	if (i <= 0)
		_putchar('\n');
}
