#include "dog.h"

/**
 * Free_dog - function to the memory
 * @d: pointer d
 * Return: no return.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{	
		return;
	}
	free(d->name);
	free(d->owner);
}
