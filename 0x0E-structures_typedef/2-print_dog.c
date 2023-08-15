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
	if (!s)
		return (i);
	while (s[i])
		i++;
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

	if (d == NULL)
		return;
	i = _strlen(d->owner);
	if (d->name == NULL && i == 0 && !d->age)
		return;
	if (d->name == NULL)
		write(1, "Name: (nil)\n", 12);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		write(1, "Age: (nil)\n", 11);
	else
		printf("Age: %.6f\n", d->age);
	if (i > 0)
		printf("Owner: %s\n", d->owner);
	else
		write(1, "Owner: (nil)\n", 13);
}

int main(void)
{
    struct dog my_dog;


    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
