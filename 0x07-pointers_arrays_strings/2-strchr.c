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

	i =	0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
