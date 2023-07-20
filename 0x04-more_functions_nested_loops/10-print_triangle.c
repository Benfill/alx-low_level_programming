#include	"main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int	space, h, i, j;

	h = 1;
	space = size - h;
	i = 0;
	j = size;
	while (j > 0)
	{
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		i = h;
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		h++;
		space = size - h;
		j--;
	}
	if (size <= 0)
		_putchar('\n');
}
