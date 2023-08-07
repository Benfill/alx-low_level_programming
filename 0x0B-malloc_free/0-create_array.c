#include	"main.h"

/**
 * create_array - function creates an array of chars 
 * @size: the number of elements
 * @c: the character to be initialized in the array
 * Return: a pointer to the array, or NULL if it fails
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char		*a;

	i = 0;
	a = (char *) malloc(1 * size + 1);
	if (size  == 0 || a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[size] = '\0';
	return (a);
}
