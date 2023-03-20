#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -function
 * @d:argument pointer
 * @name:argument pointer
 * @age:argument
 * @owner:argument
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

