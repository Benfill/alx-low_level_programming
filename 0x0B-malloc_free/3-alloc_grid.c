#include	"main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: the row part of an array
 * @height: the column part of an array
 * Return: pointer to the array or If width or height is 0 or
 * negative, return NULL
 */

int	**alloc_grid(int width, int height)
{
	int	i;
	int	j;
	int	**p;

	i = 0;
	j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (p[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (p);
}
