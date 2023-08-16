#include	"function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp
 * function does not return 0
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (!cmp || !array)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
