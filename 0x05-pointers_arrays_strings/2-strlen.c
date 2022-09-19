#include "main.h"

/**
* _strlen - Entry point to our function
* @s: a pointer variable that takes and char
* Return: 0. For Success
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++);

	return (count);
}
