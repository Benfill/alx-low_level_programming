#include	"main.h"

/**
 * reverse_array - function reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of array
 * Return: void
 */

void	reverse_array(int *a, int n)
{
	int	i;
	int	tmp[500];

	i =	0;
	while (i < n)
	{
		tmp[i] = a[n - i - 1];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = tmp[i];
		i++;
	}
}
