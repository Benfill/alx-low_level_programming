#include <stdio.h>

/**
 * main - printing the alphabet except e and q
 * Return: 0
 */

int	main(void)
{
	char	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
