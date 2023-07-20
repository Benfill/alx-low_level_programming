#include	"main.h"

/**
 * more_numbers - function that prints from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int	i, nbr;

	i =	0;
	nbr =	0;
	while (i < 10)
	{
		while (nbr < 15)
		{
			if (nbr >= 10)
			{
				_putchar(48 + nbr / 10);
				_putchar(48 + nbr % 10);
			}
			else
				_putchar(48 + nbr);
			nbr++;
		}
		nbr = 0;
		write(1, "\n", 1);
		i++;
	}
}
