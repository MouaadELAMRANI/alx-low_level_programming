#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init dog
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
