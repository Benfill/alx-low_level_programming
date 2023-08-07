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
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: the string to be copied
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 */

char	*_strdup(char *str)
{
	int	i;
	char	*p;

	i = 0;
	p = (char *) malloc(_strlen(str));
	if (str == NULL || p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
