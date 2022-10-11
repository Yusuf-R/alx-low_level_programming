#include "dog.h"

/**
 *copy - to copy the string into the memory
 *@s: the pointer to the string
 *Return: the copy of the string in the new memory
 */

char *copy(char *s)
{
	char *copy_mem;
	unsigned int len, i;

	len = i = 0;
	if (s == NULL)
		return (NULL);

	while (s[i])
	{
		len++;
	}
	copy_mem = malloc(sizeof(char) * (len + 1));
	if (copy_mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			copy_mem[i] = s[i];
		}
	}
	return (copy_mem);
}

/**
 * new_dog - function to print the attributes
 * @name: pointer to the name of the dog
 * @age: pointer to the age
 * @owner: pointer to the owner's name
 * Return: Returns a pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;

	New_dog = malloc(sizeof(dog_t));
	if (New_dog == NULL)
		return (NULL);
	New_dog->name = copy(name);
	if (New_dog->name == NULL)
	{
		free(New_dog);
		return (NULL);
	}
	New_dog->owner = copy(owner);
	if (New_dog->owner == NULL)
	{
		free(New_dog->name);
		free(New_dog);
		return (NULL);
	}
	New_dog->age = age;
	return (New_dog);
}
