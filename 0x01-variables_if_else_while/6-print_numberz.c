#include <stdio.h>

/**
 * main - printing digit with putchar function
 * Return: 0
 */

int	main(void)
{
	int	digit;

	digit = 48;
	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
