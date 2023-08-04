#include	"main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: the length of str1 containing only characters in str2
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i;
	int		j;
	int		on;

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
				break;
			}
			j++;
		}
		if (on == 0)
		{
			break;
		}
		else
			on = 0;
		j = 0;
		i++;
	}
	return (i);
}
