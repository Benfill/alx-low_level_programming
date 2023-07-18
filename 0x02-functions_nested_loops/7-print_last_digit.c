#include	"main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the last digit
 */

int	print_last_digit(int n)
{
	int	d;
	int	l;

	d = n;
	if (d == -2147483648)
	{
		l = 1;
		d++;
	}
	if (n < 0)
		d *= -1;
	while (d > 10)
		d %= 10;
	l += 48 + d;
	if (n == -2147483648)
		d++;
	write(1, &l, 1);
	return (d);
}

int main(void)
{
	int r;

	r = print_last_digit(-2147483648);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
