#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*_calloc - this function that allocates memory for an array, using malloc.
*
*@nmemb: array of elements
*@size: size of bytes
*
*Return: Returns concat of the two string.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int mul;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mul  = nmem * size;
	mem = malloc(mul);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < mul; i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
