#include <stdio.h>
#include "main.h"

/**
* reverse_array -  a function that reverses the content of an array of integers
* @a: a pointer to the array of integers that will be reversed
* @n: the number of elements in the array
* Return: returns nothing
*/
void reverse_array(int *a, int n)
{
	int i, Num_copy;
	int mid_pt;

	mid_pt = n / 2;
	if (n < 0)
		return;
	for (i = 0; i < mid_pt; i++)
	{
		Num_copy = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = Num_copy;

	}

}
