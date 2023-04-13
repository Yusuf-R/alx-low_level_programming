#include "search_algos.h"

/**
 * linear_search - ints search using LSA
 * @array: an array of integers
 * @size: size of array
 * @value: value to be searched in the array
 *
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (!array)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
