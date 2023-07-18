#include	"main.h"

/**
 * times_table - function that prints the 9 times table
 * Return: void
 */

void	times_table(void)
{
	int	a, b, result;

	a = 0;
	b = 0;
	while (a < 10)
	{
		while (b < 10)
		{
			result = a * b;
			if (result >= 10)
			{
				_putchar(48 + result / 10);
				_putchar(48 + result % 10);
			}
			else
				_putchar(48 + result);
			if (b == 9)
				break ;
			if (result > 10)
				write(1, ", ", 2);
			if (result < 10)
				write(1, ",  ", 3);
			b++;
		}
		b = 0;
		write(1, "\n", 1);
		a++;
	}
}
