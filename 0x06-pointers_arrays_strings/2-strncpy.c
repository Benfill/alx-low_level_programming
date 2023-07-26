#include	"main.h"

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
	while (i < n)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
	}
	dest[i] = '\0';
	return (dest);
}
