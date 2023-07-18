#include	"main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the last digit
 */

int	print_last_digit(int n)
{
	int	d;
	char	l;
	d = n;
	if (n < 0)
		d *= -1;
	while (d > 10)
		d %= 10;
	l = 48 + d;
	write(1, &l, 1)
	return (d);
}
