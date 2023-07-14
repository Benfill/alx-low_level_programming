#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0
 */

int	main(void)
{
	char	alpha;

	alpha = 122;
	while (alpha > 96)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
