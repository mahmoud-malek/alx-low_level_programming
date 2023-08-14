#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a strcutre that contain some details about the dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: who is the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*end of the DOG*/