#include	"dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function copies the string pointed by src to dest
 * @dest: the pointer to destination
 * @src: the pointer of source
 * Return: the dest pointer
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i =	0;
	if (src == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
	dog_t *p;
	int	nameLen;
	int	ownerLen;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	nameLen = _strlen(name);
	ownerLen = _strlen(owner);
	p->name = malloc(nameLen + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(ownerLen + 1);
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
			return (NULL);
	}
	_strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);
	return (p);
}
