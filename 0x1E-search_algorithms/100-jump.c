#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value from the given array
 *
 * @array: array of integers
 * @size: number of element in the array
 * @value: the value to be searched
 *
 * Return: the index of the value located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, l_idx;
	char *msg = "Value checked array";
	char *mfnd = "Value found between indexes";

	jump = sqrt(size);
	l_idx = 0;

	while (l_idx < size && array[l_idx] < value)
	{
		printf("%s[%lu] = [%d]\n", msg, l_idx, array[l_idx]);
		l_idx += jump;
	}
	jump = l_idx - jump;
	printf("%s [%lu] and [%lu]\n", mfnd, jump, l_idx);
	if (l_idx >= size)
		l_idx = size - 1;
	while (jump <= l_idx)
	{
		printf("%s[%lu] = [%d]\n", msg, jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}
	return (-1);
}
