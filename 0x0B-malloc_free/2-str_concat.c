#include	"main.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */

char	*str_concat(char *s1, char *s2)
{
	int	i;
	int	j;
	int	size;
	char	*p;

	i = 0;
	j = 0;
	size = _strlen(s1) +  _strlen(s2);
	p = (char *) malloc(size + 1);
	if (p == NULL)
		return (NULL);
	while (j < _strlen(s1))
	{
		p[j] = s1[j];
		j++;
	}
	while (j < size)
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[size] = '\0';
	return (p);
}
