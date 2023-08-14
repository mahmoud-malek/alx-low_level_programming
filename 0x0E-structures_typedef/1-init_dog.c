#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: dog struct
 * @name: name of the dog
 * @age: the age of it
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 d->name = malloc(strlen(name) + 1);
	 strcpy(d->name, name);

	 d->owner = malloc(strlen(owner) + 1);
	 strcpy(d->owner, owner);

	 d->age = age;
}
