#include	"main.h"

/**
 * leet - functions encodes a string into 1337
 * @str: the string to be encoded
 * Return: a pointer to the string
 */

char	*leet(char *str)
{
	int	i;
	int	j;
	char	leet[5] =	{'4', '3', '0', '7', '1'};
	char	upAlpha[6] =	{'A', 'E', 'O', 'T', 'L', '\0'};
	char	lowAlpha[5] =	{'a', 'e', 'o', 't', 'l'};

	i =	0;
	j =	0;
	while (str[i])
	{
		while (upAlpha[j] != '\0')
		{
			if (str[i] == upAlpha[j] || str[i] == lowAlpha[j])
				str[i] = leet[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
