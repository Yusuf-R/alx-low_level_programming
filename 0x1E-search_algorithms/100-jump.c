#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of ints using the JSA
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value in array or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t p = 0, q = sqrt(size);

	if (!array)
		return (-1);

	while (p < size && array[p] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		p += q;
	}

	q = p - q;
	printf("Value found between indexes [%lu] and [%lu]\n", q, p);
	p = p >= size ? size - 1 : p;
	while (q <= p)
	{
		printf("Value checked array[%lu] = [%d]\n", q, array[q]);
		if (array[q] == value)
			return (q);
		q++;
	}
	return (-1);
}
