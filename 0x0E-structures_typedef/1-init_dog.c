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
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->age = age;
	d->name = name;
	d->owner = owner;
}
