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

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void		*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	_memset(p, '\0', nmemb);
	return (p);
}
