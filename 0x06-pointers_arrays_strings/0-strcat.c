#include	"main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i =	0;
	j =	0;
	while (src[i])
	{
		if (dest[j] == '\0')
		{
			while (src[i])
			{
				dest[j + i] = src[i];
				i++;
			}
			break;
		}
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
