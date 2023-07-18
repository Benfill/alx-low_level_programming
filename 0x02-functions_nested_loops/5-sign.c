#include "main.h"

/**
 * print_sign - check if the n greater than 0 or not
 * @n: the number to be checked
 * Return: 1 if n greater than 0, 0 if it is 0, -1 if n less
 */
int	print_sign(int n)
{
	int	retValue;
	if (n > 0)
	{
		putchar('+');
		retValue = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		retValue = 0;
	}
	else
	{
		putchar('-');
		retValue = -1;
	}
	return (retValue);
}
