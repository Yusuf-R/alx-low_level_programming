#include "search_algos.h"

/**
 * binary_search - search for an integer using BSA
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: value to seach
 *
 * Return: index location or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;
	size_t j;

	if (!array || !size)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array:");
		for (j = start; j <= end; j++)
		{
			if (j < end)
				printf(" %d,", array[j]);
			else
				printf(" %d\n", array[j]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
