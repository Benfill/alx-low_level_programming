#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start with
 * Return: void
 */

int my_putnbr(int nb)
{
    unsigned int a;
    if (nb < 0)
    {
        _putchar('-');
        my_putnbr(-nb);
    }
    if (nb >= 10)
    {
	a = nb % 10;
	nb = nb / 10;
	my_putnbr(nb);
	_putchar(48 + a);
    }
    return (0);
}

void	print_to_98(int n)
{
	while (n < 98 || n > 98)
	{
		if (n >= 10)
			if (n < 100)
				_putchar(48 + n / 10);
			else
				_putchar(48 + n / 100);
			my_putnbr(n);
		else
			my_putnbr(n);
		if (n != 98)
			write(1, ", ", 2);
		else
			break;
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	if (n == 98)
	{
		_putchar(48 + n / 10);
		_putchar(48 + n % 10);
	}
	write(1, "\n", 1);
}
