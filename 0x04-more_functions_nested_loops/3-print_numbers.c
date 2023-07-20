#include	"main.h"

/**
 * print_numbers - function prints from 0 to 9
 * Return: void
 */

void	print_numbers(void)
{
	int	nbr;

	nbr = 0;
	while (nbr < 10)
	{
		_putchar(48 + nbr);
		nbr++;
	}
	_putchar('\n');
}
