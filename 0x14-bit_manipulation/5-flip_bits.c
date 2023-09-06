#include	"main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int count = 0;

	while (xorResult)
	{
		xorResult &= (xorResult - 1);
		count++;
	}
	return (count);
}
