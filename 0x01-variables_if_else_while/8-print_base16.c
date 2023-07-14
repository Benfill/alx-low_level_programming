#include <stdio.h>

/**
 * main - printing all the numbers of base 16
 * Return: 0
 */

int	main(void)
{
	char	digit;
	char	alpha;

	digit = 48;
	alpha = 97;
	while (digit < 58 || alpha < 103)
	{
		if (digit < 58)
		{
			putchar(digit);
			digit++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
