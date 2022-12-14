#include "function_pointers.h"

/**
*int_index - The function searches for an integer
*
*@array: the pointer array itself
*@size: size of the pointr array
*@cmp: the pointer to the function
*
*Return: the index of first positive march
*Else, -1.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
