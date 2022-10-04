#include "main.h"

/**
*create_array - this function will creates an array of
*chars, and initializes it with a specific char.
*
*@size: the total bytes to be filled the char c
*
*@c:the character to be used to fill the size space
*
*Return: Returns 0 fo success and NULL if error*
*/

char *create_array(unsigned int size, char c)
{

	char *mem;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	mem = malloc(sizeof(*mem) * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}
	return (mem);
}
