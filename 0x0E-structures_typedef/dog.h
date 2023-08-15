#ifndef DOG
#define	DOG
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

/**
 * struct dog - dog infos
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct	dog
{
	char	*name;
	float	age;
	char	*owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
