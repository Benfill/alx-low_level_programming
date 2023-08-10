#include	"main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to be allocated
 * Return: void
 */

void	*malloc_checked(unsigned int b)
{
	void	*p;

	p = malloc(b);
	if (p == NULL)
		exit(1);
	return (p);
}
