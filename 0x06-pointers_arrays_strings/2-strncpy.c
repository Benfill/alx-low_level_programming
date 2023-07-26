#include	"main.h"
#include <string.h>

/**
 * _strncpy - function copies a string
 * @dest: destination
 * @src: source
 * Return: the pointer to the copied string
 **/

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i =	0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		i++;
	}
	return (dest);
}
