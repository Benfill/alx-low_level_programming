#include	"main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: pointer to the string
 * Return: void
 */

void	_print_rev_recursion(char *s)
{
	char	c;

	if (*s != '\0')
	{
		c = *s;
		s++;
		if (*s != '\0')
			_print_rev_recursion(s);
	}
	else if (s[0] != '\0')
		putchar(c);
}
