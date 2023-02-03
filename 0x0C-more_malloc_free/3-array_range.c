#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*array_range - this function that allocates memory for an array, using malloc.
*
*@min: minmuym value included
*@max: maximum value included
*
*Return: Returns array from min to max included.
*/

int *array_range(int min, int max)
{
	int  *mem;
	int size, i;

	if (min > max)
		return (NULL);

	size  = max - min + 1;
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		mem[i] = min + i;
	}
	return (mem);
}
