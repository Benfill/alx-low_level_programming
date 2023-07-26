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
	while (i < n && src[0] != '\0')
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
