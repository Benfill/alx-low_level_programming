#include	"main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;
	int	on;
	char	*str = NULL;

	i =	0;
	j =	0;
	on =	0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				on = 1;
				str = &s[i];
				break;
			}
			j++;
		}
		j = 0;
		if (on == 1)
			break;
		i++;
	}
	return (str);
}
