#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
*malloc_checked - this a function allocates memory using malloc.
*
*@b: the total bytes to be filled
*
*Return: Returns the address to pointer
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
