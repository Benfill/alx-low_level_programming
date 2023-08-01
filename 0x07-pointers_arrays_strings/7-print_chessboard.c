#include	"main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: aray
 * Return: void
 */

void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i =	0;
	j =	0;
	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
