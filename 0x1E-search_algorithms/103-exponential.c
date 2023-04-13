#include "search_algos.h"

/**
 * exponential_search - searches for a val in a sorted arr using ESA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1, s_new = 0;
	int ret_val;

	if (!array || !size)
		return (-1);

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx <<= 1;
	}
	s_new = (idx >= size ? size : idx + 1) - (idx >> 1);
	idx >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			idx, idx << 1 >= size ? size - 1 : idx << 1);
	ret_val = binary_search(array + idx, s_new, value);
	return (ret_val == -1 ? ret_val : ret_val + (int)idx);
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to first element of array to search
 * @size: size of the array
 * @value: value to seach for
 *
 * Return: index of value location or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x_st = 0, y_end = size - 1, mdx;
	size_t idx;

	if (!array || !size)
		return (-1);

	while (x_st <= y_end)
	{
		mdx = (x_st + y_end) / 2;
		printf("Searching in array:");
		for (idx = x_st; idx <= y_end; idx++)
		{
			if (idx < y_end)
				printf(" %d,", array[idx]);
			else
				printf(" %d\n", array[idx]);
		}
		if (array[mdx] == value)
			return (mdx);
		else if (array[mdx] > value)
			y_end = mdx - 1;
		else
			x_st = mdx + 1;
	}
	return (-1);
}
