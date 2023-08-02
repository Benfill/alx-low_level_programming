#include	"main.h"

/**
 * _puts_recursion - function prints a string
 * @s: a pointer to the string
 * Return: void
 */

void	_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
