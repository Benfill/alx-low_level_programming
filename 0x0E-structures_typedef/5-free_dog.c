#include	"dog.h"

/**
 * free_dog - function that frees strcuts
 * @d: pointer to the struct
 */

void	free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d)
}
