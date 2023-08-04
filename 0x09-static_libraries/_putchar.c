#include "main.h"

/**
 * main - programme prints _putchar
 * @c: the character
 * Return: 0
 */
int	putchar(int c)
{
	return (write(1, "_putchar\n", 9));
}
