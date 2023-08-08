#include	"main.h"

/**
 * free_grid -  function that frees a 2 dimensional grid
 * @grid: two dimensional array of integers
 * @height: the vertical part of the array
 * Return: void
 */

void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
