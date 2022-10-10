#ifndef DOG_H
#define DOG_H


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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *Error(void);


typedef struct dog dog_t




#endif
