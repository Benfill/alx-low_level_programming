#include	"main.h"

/**
 * rot13 - function encodes a string to rot13
 * @str: the string to be changed
 * Return: str
 */

char	*rot13(char *str)
{
	int	i;
	int	j;
	char	rot[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	char	swap[53] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', '\0'};

	i =	0;
	j =	0;
	while (str[i])
	{
		while (rot[j] != '\0')
		{
			if (str[i] == rot[j])
			{
				str[i] = swap[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
