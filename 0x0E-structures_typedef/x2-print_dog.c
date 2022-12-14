#include "dog.h"

/**
 * Error - process if a NULL is passed
 * Return: a pointer
 */

char *Error(void)
{
	int i, j;
	char *nill = "(nil)";
	char *mem;

	i = j = 0;
	while (nill[j])
	{
		j++;
	}
	mem = malloc(sizeof(*mem) * (j + 1));
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
	mem[i] = '\0';
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
