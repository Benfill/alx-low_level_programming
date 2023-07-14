#include <stdio.h>

/**
 * main - printing the alphabet
 * Return: 0
 */

int	main(void)
{
	char alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
