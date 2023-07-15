#include <stdio.h>

/**
 * main - printing the combinaton of two digit
 * Return: 0
 */

int	main(void)
{
	int	digit;
	int	digit2;

	digit	= 48;
	digit2	= 49;
	while (digit2 != 58)
	{
		while (digit != '9')
		{
			putchar(digit);
			putchar(digit2);
			if (digit != '8')
			{
				putchar(',');
				putchar(' ');
			}
			if (digit2 == '9')
			{
				digit++;
				digit2 = '1';
			}
			if (digit > digit2 || digit == digit2)
			{
				while (digit > digit2 || digit == digit2)
					digit2++;
			}
			else
				digit2++;
		}
		digit2++;

	}
	putchar('\n');
	return (0);
}
