#include "search_algos.h"

/**
 * linear - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	char *msg = "Value checked array";

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("%s[%lu] = [%d]\n", msg, i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
