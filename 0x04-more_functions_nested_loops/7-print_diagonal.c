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
		putchar('\\');
		putchar('\n');
		n--;
		if (n != 0)
			putchar(' ');
	}
	if (n <= 0)
		putchar('\n');
}
