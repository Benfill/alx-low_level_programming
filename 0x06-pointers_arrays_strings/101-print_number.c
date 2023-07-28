#include	"main.h"

/**
 * print_number - function prints an integer
 * @n: the number to be printed
 * Return: void
 */

void	print_number(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar(48 + n);
}
