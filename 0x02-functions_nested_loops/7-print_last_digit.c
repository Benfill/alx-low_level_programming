#include	"main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the last digit
 */

int	print_last_digit(int n)
{
	int	d;

	d = n;
	if (n < 0)
		d *= -1;
	while (d > 10)
		d %= 10;
	putchar(48 + d);
	return (d);
}
