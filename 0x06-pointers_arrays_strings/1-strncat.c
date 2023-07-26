#include	"main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the number of character
 * Return: a pointer to the resulting string dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i =	0;
	j =	0;
	while (i < n)
	{
		if (dest[j] == '\0')
		{
			while (i < n)
			{
				dest[j + i] = src[i];
				if (src[i] == '\0')
					break;
				i++;
			}
			break;
		}
			j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
