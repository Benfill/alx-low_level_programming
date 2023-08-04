#include "main.h"

/**
 * main - programme prints _putchar
 * @c: the character
 * Return: 0
 */
int	_putchar(char c)
{
	return (write(1, &c, 1));
}
