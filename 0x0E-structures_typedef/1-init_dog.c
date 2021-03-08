#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initalize a variable of type struct dog
 * @d: new variable
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: 0
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
