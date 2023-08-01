#include	"main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer to the memory where stored the array
 * @size: size of the array
 * Return: void
 */

void	print_diagsums(int *a, int size)
{
	int	i;
	int	res;
	int	res2;

	i =	0;
	res =	0;
	res2 =	0;
	while (i < size)
	{
		res += a[i * size + i];
		res2 += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", res, res2);
}
