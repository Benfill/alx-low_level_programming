#include	"main.h"

/**
 * _strcpy - function copies the string pointed by src to dest
 * @dest: the pointer to destination
 * @src: the pointer of source
 * Return: the dest pointer
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i =	0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
