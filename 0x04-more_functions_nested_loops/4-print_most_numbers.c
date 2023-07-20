#include	"main.h"

/**
 * print_most_numbers - function prints from 0 to 9 
 * Return: void
 */

void	print_most_numbers(void)
{
	int	nbr;

	nbr = 0;
	while (nbr >= 0 && nbr <= 9)
	{
		if (nbr == 2 || nbr == 4)
			nbr++;
		else
		{
			putchar(48 + nbr);
			nbr++;
		}
	}
	putchar('\n');
}
