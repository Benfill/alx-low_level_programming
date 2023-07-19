#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start with
 * Return: void
 */

void	print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		if (n > 98)
			n--;	
		else if (n < 98)
			n++;
		if (n >= 10)
		{
			_putchar(48 + n / 10);
			_putchar(48 + n % 10);
		}
		else
			_putchar(48 + n);
		if (n != 98)
			write(1, ", ", 2);
	}
}
