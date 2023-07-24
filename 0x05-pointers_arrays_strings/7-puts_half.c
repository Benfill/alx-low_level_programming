#include	"main.h"

/**
 * puts_half - print the half of a string
 * @str: the string
 * Return: void
 */

void	puts_half(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
		i++;
	n = i / 2;
	while (str[n])
	{
		_putchar(str[n - 1]);
		n++;
	}
	_putchar('\n');
}
