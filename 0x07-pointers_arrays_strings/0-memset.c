#include	"main.h"

/**
 * _memset - function fills memory with constant byte
 * @s: a pointer to the string
 * @b: constant byte
 * @n: number of byte
 * Return: a pointer to the string
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i =	0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
