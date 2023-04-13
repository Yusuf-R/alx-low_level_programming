#include "search_algos.h"

/**
 * interpolation_search - searches for a val in a sorted arr using ISA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, z = size - 1;

	if (!array || !size)
		return (-1);
	while (1)
	{
		x = y + (((double)(z - y) /
			(array[z] - array[y])) * (value - array[y]));
		if (x >= size)
		{
			printf("Value checked array[%lu] is out of range\n", x);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		else if (array[x] > value)
			z = x - 1;
		else if (array[x] < value)
			y = x + 1;
	}
	return (-1);
}
