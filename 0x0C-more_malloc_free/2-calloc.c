#include	"main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	i;
	char		*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	return (p);
}
