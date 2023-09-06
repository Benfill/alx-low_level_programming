#include	"main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is
 * one or more chars in the string b that is not
 * 0 or 1 || b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int	i;
	unsigned int	sum;

	i = 0;
	sum = 0;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] >= '0' && b[i] <= '1'))
			return (0);
		sum <<= 1;
		sum += b[i] - 48;
		i++;
	}
	return (sum);

}
