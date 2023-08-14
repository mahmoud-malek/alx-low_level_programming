#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d: dog struct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
