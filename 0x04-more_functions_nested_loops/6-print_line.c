#include	"main.h"

/**
 * print_line - function that prints a straight line
 * @n: is the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
