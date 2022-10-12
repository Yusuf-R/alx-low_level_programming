#include "function_pointers.h"

/**
*array_iterator - The function prints a name
*
*@array: the pointer array itself
*@size: size of the pointr array
*@action: the function to print
*
*Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned i;

	if (!array || !action || size == 0)
		return;
	for(i = 0; i < size; i++)
	{
		array[i];
		action(a[i]);
	}
}
