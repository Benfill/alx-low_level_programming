#include	"dog.h"

/**
 * print_dog - function prints dog's infos
 * @d: pointer to struct dog
 */

void	print_dog(struct dog *d)
{
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
	if (strlen((*d).owner) == 0)
		write(1, "Owner: (nil)\n", 13);
	else
		printf("Owner: %s\n", d->owner);
}

int main(void)
{
    struct dog my_dog;

    print_dog(&my_dog);
    return (0);
}
