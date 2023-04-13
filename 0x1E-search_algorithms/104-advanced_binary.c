#include "search_algos.h"

/**
 * adv_b - searches for a val in a sorted arr using adv. binary
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int *adv_b(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); idx < size; idx++)
		printf("%d%s", array[idx], idx + 1 == size ? "\n" : ", ");

	idx = (size - 1) / 2;
	if (array[idx] == value)
	{
		if (idx)
			return (adv_b(array, idx + 1, value));
		return (array + idx);
	}
	else if (array[idx] > value)
		return (adv_b(array, idx + 1, value));
	else
		return (adv_b(array + idx + 1, size - idx - 1, value));
}

/**
 * advanced_binary - searches for a val in a sorted arr using BSA
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *arr = adv_b(array, size, value);

	if (!arr)
		return (-1);
	else
		return (arr - array);
}
