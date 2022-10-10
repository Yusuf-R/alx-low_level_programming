#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A structure with nametag dog
 *
 * @name: pointer to the name of the dog
 * @age: the dog age
 * @owner: pointer to the owner's name
 *
 * Description: Defining a newtype struct dog with the following
 * elements as described above.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
