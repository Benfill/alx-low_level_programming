#include	"main.h"

/**
 * print_diagonal - function that prints \ n times
 * @n: the number of times \ will be printed
 * Return: void
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		n--;
		if (n != 0)
			_putchar(' ');
	}
	if (n <= 0)
		_putchar('\n');
}
