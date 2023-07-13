#include "search_algos.h"


/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l_idx = 0;
	size_t r_idx = size - 1;
	size_t m_idx, i;
	char *msg = "Searching in array";

	if (!array || !size)
		return (-1);

	while (l_idx <= r_idx)
	{
		m_idx = (l_idx + r_idx) / 2;
		printf("%s: ", msg);
		for (i = l_idx; i <= r_idx; i++)
		{
			if (i == r_idx)
				printf("%d\n",  array[i]);
			else
				printf("%d ", array[i]);
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
