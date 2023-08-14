#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog -  a function that frees dogs
 * @d: dog
*/

void free_dog(dog_t *d)
{
	if(d != NULL)
		free(d);
}
