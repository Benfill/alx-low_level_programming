#include "dog.h"

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
 * init_dog - function initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
}
