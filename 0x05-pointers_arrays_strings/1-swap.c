#include "main.h"

/**
* swap_int - Entry point to our function.
* This function will swap the parameters to them selves
* @a: a pointer variable for the first parameter
* @b: a pointer variable for the second parameter
* Return: 0. For Success
*/

void swap_int(int *a, int *b)
{
	int hold;

	hold  = *a;
	*b = *a;
	*a = hold;

	return (*a);
	return (*b);
}
