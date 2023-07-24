#include	"main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 * Return: void
 */

void	print_rev(char *s)
{
	int	i;

	i = _strlen(s);
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
}
