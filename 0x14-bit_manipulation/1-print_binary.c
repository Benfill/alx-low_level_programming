#include	"main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int	sum;
	int		i;
	bool sbf = false;

	sum = 0;
	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		sum = (n >> i) & 1;
		if (sum == 1 || sbf)
		{
			putchar(48 + sum);
			sbf = true;
		}
	}
}
