#include	"main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void	print_rev(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	_putchar('\n');
}
