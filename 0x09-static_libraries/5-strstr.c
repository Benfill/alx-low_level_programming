#include	"main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the main string to be scanned
 * @needle: the small string to be searched with-in haystack string
 * Return: a pointer to the first occurrence of substring from haystack
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	tmp;

	i =	0;
	j =	0;
	tmp =	0;
	while (haystack[i])
	{
		tmp = i;
		while (needle[j] != '\0' && needle[j] == haystack[i])
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[tmp]);
		}
		j = 0;
		i = tmp + 1;
	}
	return (NULL);
}
