#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}

