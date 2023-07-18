#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: void
 */
void	print_alphabet_x10(void)
{
	char	alpha;
	int	i;

	alpha =	'a';
	i =	0;
	while (i < 10)
	{
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		i++;
		putchar('\n');
	}
}
