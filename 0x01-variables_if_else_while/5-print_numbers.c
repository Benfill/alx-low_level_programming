#include <stdio.h>

/**
 * main - prints digits
 * return: 0
 */

int	main(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		printf("%c", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
