#include "search_algos.h"
#include <stdio.h>

/**
 * bin_exp_search - use the bin algo here
 * @array: array of integers
 * @l_idx: left most index
 * @r_idx: right most index
 * @value: the value to serch
 * Return: index of value, -1 if not found
 */
int bin_exp_search(int *array, size_t l_idx, size_t r_idx, int value)
{
	size_t m_idx, i;
	char *msg = "Searching in array";

	while (l_idx <= r_idx)
	{
		m_idx = (l_idx + r_idx) / 2;
		printf("%s: ", msg);
		for (i = l_idx; i <= r_idx; i++)
		{
			if (i == r_idx)
				printf("%d\n",  array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[m_idx] < value)
			l_idx = m_idx + 1;
		else if (array[m_idx] > value)
			r_idx = m_idx - 1;
		else
			return (m_idx);
	}
	return (-1);
}

/**
 * exponential_search - search value using this algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value, -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	char *exp_msg = "Value checked array";
	char *exp_fnd = "Value found between indexes";
	size_t idx = 1;
	size_t high, low;

	if (!array || !size || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("%s[0] = [%d]\n", exp_msg, array[0]);
		return (0);
	}
	while (idx < size && array[(int)idx] < value)
	{
		printf("%s[%lu] = [%d]\n", exp_msg, idx, array[idx]);
		idx *= 2;
	}

	low = idx / 2;
	if (idx >= size)
		high = size - 1;
	else if (idx < size)
		high = idx;


	printf("%s [%lu] and [%lu]\n", exp_fnd, low, high);
	return (bin_exp_search(array, low, high, value));
}
