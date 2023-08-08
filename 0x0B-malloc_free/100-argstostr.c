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
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char	*argstostr(int ac, char **av)
{
	int	i;
	int	j;
	int	h;
	int	size;
	char	*p;

	i = 0;
	j = 0;
	h = 0;
	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (av[i])
	{
		size += _strlen(av[i]);
		i++;
	}
	p = (char *) malloc(size + ac - 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			p[h] = av[i][j];
			h++;
			j++;
		}
		j = 0;
		p[h] = '\n';
		i++;
		h++;
	}
	p[h] = '\0';
	return (p);
}
