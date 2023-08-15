#include	"dog.h"

/**
 * print_dog - function prints dog's infos
 * @d: pointer to struct dog
 */

void	print_dog(struct dog *d)
{
	char	*own = (d->owner);

	if (d == NULL)
		return;
	if (d->name == NULL)
		write(1, "Name: (nil)\n", 12);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		write(1, "Age: (nil)\n", 11);
	else
		printf("Age: %.6f\n", d->age);
	if (*own == '\0' && *(own + 1) == '\0')
		write(1, "Owner: (nil)\n", 13);
	else
		printf("Owner: %s\n", d->owner);
}
