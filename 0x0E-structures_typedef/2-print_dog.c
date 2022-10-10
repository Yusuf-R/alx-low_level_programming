#include "dog.h"
#include <string.h>

/**
 * Error - process if a NULL is passed
 * Return: a pointer
 */

char *Error(void)
{
	int i;
	char *nill = "(nill)";
	char *mem;

	mem = malloc(sizeof(char) * strlen(nill));
	if (mem == NULL)
	{
		free(mem);
	}
	return (NULL);
	while (nill[i])
	{
		mem[i] = nill[i];
		i++;
	}
	return (mem);
}

/**
 * print_dog - function to print the attributes
 * @d: pointer declaration of dog struct
 * Return: no return.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = Error();
	if (d->owner == NULL)
		d->owner = Error();
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}



