#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*_realloc - this function that allocates memory for an array, using malloc.
*
*@ptr: the pointer to the old address of block size
*@old_size: old block size
*@new_size: new block size
*
*Return: Returns array from min to max included.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void  *mem;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (mem);
	}

	if (new_size == old_size)
		return (ptr);

	mem =  malloc(new_size);
	if (mem == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *) mem + i) = *((char *) ptr + i);
		}
	}
	free(ptr);
	return (mem);
}
