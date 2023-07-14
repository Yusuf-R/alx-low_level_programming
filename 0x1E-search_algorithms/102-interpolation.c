#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - Entry point
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the data to search for
 *
 * Return:  first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	char *msg;

	low = 0;
	high = size - 1;
	msg = "Value checked array";

	if (!array || !size)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("%s[%lu] = [%d]\n", msg, pos, array[pos]);
		if (pos >= size)
		{
			printf("%s [%lu] is out of range\n", msg, pos);
			return -1;
		}

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("%s [%lu] is out of range\n", msg, pos);
	return (-1);
}
