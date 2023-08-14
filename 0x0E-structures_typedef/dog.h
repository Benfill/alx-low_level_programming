#ifndef DOG
#define	DOG
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct dog - dog infos
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct	dog
{
	char	*name;
	float	age;
	char	*owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
