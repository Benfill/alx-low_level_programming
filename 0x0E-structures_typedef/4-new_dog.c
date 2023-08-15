#include	"dog.h"

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
	dog_t *p = NULL;

	_strcpy(p->name, name);
	p->age = age;
	p->owner = _strcpy(p->owner, owner);
	if (p->name == NULL || p->owner == NULL)
		return (NULL);
	return (p);
}
