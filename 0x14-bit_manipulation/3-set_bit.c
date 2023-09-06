#include	"main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the number
 * @index: the index of the bit to be setted
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int		numBits = sizeof(*n) * 8;
	unsigned long int	mask = 1UL << index;

	if (index >= numBits)
		return (-1);
	*n |= mask;
	return (1);
}
