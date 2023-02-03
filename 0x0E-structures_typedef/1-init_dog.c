#include "dog.h"

/**
 * init_dog - function to initialize dog
 * @d: pointer declaration of dog struct
 * @name:  pointer to the dog name
 * @age:   the age of the dog
 * @owner: pointer to the owner's name
 *
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
