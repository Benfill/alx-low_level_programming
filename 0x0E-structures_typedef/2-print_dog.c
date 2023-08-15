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
 * print_dog - function prints dog's infos
 * @d: pointer to struct dog
 * Return: void
 */

void	print_dog(struct dog *d)
{
	int	i;

	i = _strlen(d->owner);
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("(nil)\n");
	else
		printf("Age: %.6f\n", d->age);
	if (i > 0)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
