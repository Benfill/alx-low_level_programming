#include	"dog.h"

/**
 * free_dog - function that frees strcuts
 * @d: pointer to the struct
 */

void	free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		d = NULL;
	}
}
