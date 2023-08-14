#include	"dog.h"

/**
 * print_dog - function prints dog's infos
 * @d: pointer to struct dog
 * Return: void
 */

void	print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("(nil)\n");
	else
		printf("Age: %.1f\n", d->age);
	if (strlen(d->owner) > 0)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
