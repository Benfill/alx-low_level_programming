#include	"main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer to the string
 * @c: the character to be located
 * Return: pointer to the first occurence of the character c
 */

char	*_strchr(char *s, char c)
{
	int	i;
	char	*str = NULL;

	i =	0;
	while (s[i])
	{
		if (s[i] == c)
		{
			str = &s[i];
			return (str);
		}
		i++;
	}
	return (str);
}
