#include	"main.h"
i
/**
 * rint_diagonal - function that prints \ n times
 * @n: the number of times \ will be printed
 * Return: void
 */
void print_diagonal(int n)
{
	while(n > 0)
	{
		_putchar('\n');
		n--;
	}
	if(n < 0)
		_putchar('\n');
	else
	{
		_putchar('\\');
		_putchar('\n');
	}
}
