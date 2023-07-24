#include	"main.h"

/**
 * _putnbr - prints a number
 * @nbr: the nbr
 * Return: void
 */

void	_putnbr(int nbr)
{
	if (nbr < 0)
	{
		_putchar('-');
		_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		_putnbr(nbr / 10);
		_putnbr(nbr % 10);
	}
	else
	{
		_putchar(nbr + '0');
	}
}

/**
 * print_array - function that prints n elements of an array
 * @a: the array
 * @n: the number of element
 * Return: void
 */

void	print_array(int *a, int n)
{
	int	i;

	i =	0;
	while (i < n)
	{
		_putnbr(a[i]);
		if (i + 1 < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}}
