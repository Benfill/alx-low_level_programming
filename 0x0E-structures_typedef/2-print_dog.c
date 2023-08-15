#include	"dog.h"

/**
 * print_dog - function prints dog's infos
 * @d: pointer to struct dog
 */

void	print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL && d->age == 0 && d->owner[0] == '\0' && d->owner == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL || d->owner[0] == '\0')
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
