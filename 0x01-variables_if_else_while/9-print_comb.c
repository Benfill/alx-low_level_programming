#include <stdio.h>

/**
 * main - priting all possible combinations of single-digit
 * Return: 0
 */

int	main(void)
{
	int	digit;

	digit = 48;
	while (digit < 58)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
