#include	"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: where is the number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int		sum;
	unsigned int	numBits = sizeof(n) * 8;

	if (index >= numBits)
		return (-1);
	sum = (n >> index) & 1;
	return (sum);
}
