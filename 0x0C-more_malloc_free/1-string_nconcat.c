#include	"main.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

unsigned int	_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte in s2 to be concatenate
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	s1len = 0;
	unsigned int	i;
	int		j;
	char		*p;

	j = 0;
	if (s1 != NULL)
		s1len = _strlen(s1);
	else
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	p = malloc(s1len + n + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < s1len; i++)
	{
		p[i] = s1[i];
		j++;
	}
	if (n >= _strlen(s2))
	{
		for (i = 0; s2[i]; i++)
		{
			p[j] = s2[i];
			j++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			p[j] = s2[i];
			j++;
		}
	}
	p[j] = '\0';
	return (p);
}
