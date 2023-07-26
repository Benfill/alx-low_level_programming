#include	"main.h"

/**
 * _strcmp - function compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the result
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i =	0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
