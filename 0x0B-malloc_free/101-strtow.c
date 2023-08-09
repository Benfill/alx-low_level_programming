#include	"main.h"

/**
 * _wordCounter - function that counts the lenght of word in string
 * @s: the string
 * Return: the length of s
 */

int	_wordCounter(char *s)
{
	int	i;
	int	counter;

	i =		0;
	counter =	0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != ' ' && s[i] != '\0')
			i++;
	}
	return (counter);
}

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != ' ' && s[i] != '\0')
		i++;
	return (i);
}

/**
 * my_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: the string to be copied
 * @len: lenght of the string to be copied
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 */

char	*my_strdup(char *str, int len)
{
	char *p = (char *)malloc(len + 1);
	int	i = 0;

	if (p == NULL)
		return (NULL);
	for (; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';
	return (p);
}

/**
 * strtow - function that splits a string into words
 * @str: the string to be splited
 * Return: a pointer to an array of strings (words)
 */

char	**strtow(char *str)
{
	int	i;
	int	j;
	int	counter;
	int	word_len;
	char	**p;
	char	*s;

	i =		0;
	j =		0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (NULL);
	i = 0;
	if (str[0] == '\0')
		return (NULL);
	counter =	_wordCounter(str);
	p = (char **) malloc(sizeof(char *) * (counter + 1));
	if (!p)
		return (NULL);
	while (i < counter)
	{
		while (str[j] == ' ')
			j++;
		word_len = _strlen(&str[j]);
		if (word_len > 0)
		{
			s = my_strdup(&str[j], word_len);
			p[i] = (char *) malloc(word_len + 1);
			if (!p[i])
				return (NULL);
			p[i] = s;
			free(s);
			i++;
		}
		j += word_len;
	}
	p[i] = NULL;
	return (p);
}
