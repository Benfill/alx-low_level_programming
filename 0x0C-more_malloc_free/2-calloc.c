#include	"main.h"

/**
 * _memset - function fills memory with constant byte
 * @s: a pointer to the string
 * @c: constant byte
 * @n: number of byte
 * Return: a pointer to the string
 */

void	*_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;

	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
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
	_memset(p, 0, nmemb);
	return (p);
}
