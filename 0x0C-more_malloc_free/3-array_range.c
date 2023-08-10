#include	"main.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: a pointer to the array
 */

int	*array_range(int min, int max)
{
	int	i;
	int	size = 0;
	int	*p;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
