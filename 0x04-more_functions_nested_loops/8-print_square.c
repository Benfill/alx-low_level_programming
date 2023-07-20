#include	"main.h"

/**
 * print_square - is a program that prints square
 * @size: the size of square
 * Return: void
 */

void print_square(int size)
{
	int	i, j;

	i = size;
	j = i;
	while (size > 0)
	{
		while (i > 0)
		{
			putchar('#');
			i--;
		}
		i = j;
		putchar('\n');
		size--;
	}
	if (j <= 0)
		putchar('\n');
}
