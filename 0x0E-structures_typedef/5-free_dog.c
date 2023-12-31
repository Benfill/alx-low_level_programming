#include	"dog.h"

/**
 * free_dog - function that frees strcuts
 * @d: pointer to the struct
 */

void	free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		d->age = 0;
		free(d);
	}
}
