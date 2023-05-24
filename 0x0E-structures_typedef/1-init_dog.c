#include <stdlib.h>
#include "dog.h"

/**
* init_dog - print a function initializes a variable of type struct dog
* @d: pointer to the type struct dog to initialize
* @name: name to initialize
* @age: age of dog to initialize
* @owner: owner of dog to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}