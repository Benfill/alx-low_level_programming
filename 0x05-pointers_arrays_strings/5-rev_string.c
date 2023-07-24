#include	"main.h"

/**
 * rev_string - function that reverse string
 * @s: the string
 * Return: void
 */

void	rev_string(char *s)
{
	int	i;
	int	j;
	char	*str;

	i =	0;
	j =	0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	while (j < i)
	{
		s[j] = str[i - j - 1];
		j++;
	}
}
