#include	"dog.h"

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
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: the string to be copied
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 */

char	*_strdup(char *str)
{
	int	i;
	char	*p;

	i = 0;
	if (str == NULL)
		return (NULL);
	p = (char *) malloc(_strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/**
 * new_dog - function creates copy of name and owner
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the dog's owner
 * Return: pointer to the dog_t or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	p->name = _strdup(name);
	p->age = age;
	p->owner = _strdup(owner);
	return (p);
}
