#include	"main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @str: string
 * Return: pointer to the string
 */

char	*cap_string(char *str)
{
	int	i;

	i =	0;
	while (str[i])
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == ' ')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		else if (str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '\n')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		else if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		else if (str[i] == '\t')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		else if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		i++;
	}
	return (str);
}
