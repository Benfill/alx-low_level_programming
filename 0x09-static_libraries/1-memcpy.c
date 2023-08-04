#include	"main.h"

/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: pointer to dest memory
 * @src: pointer to src memory
 * @n: number of bytes to be copied
 * Return: dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i =	0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
