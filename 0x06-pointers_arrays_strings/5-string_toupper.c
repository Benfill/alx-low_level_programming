#include	"main.h"

/**
 * string_toupper - function changes all lowercases letters to uppercase
 * @str: the string to be changed
 * Return: the sring
 */

char	*string_toupper(char *str)
{
	int	i;

	i =	0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
