#include	"main.h"

/**
 * rev_string - function that reverse string
 * @s: the string
 * Return: void
 */

void	rev_string(char *s)
{
	char	*s2;
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[j])
	{
		s2[i] = s[j];
		i--;
		j++;
	}
	s2[j] = '\0';
	i = 0;
	while (s[i])
	{
		s[i] = s2[i];
		i++;
	}
	
}
