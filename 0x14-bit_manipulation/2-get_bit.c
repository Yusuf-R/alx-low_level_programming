#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The actual num in dec
 * @index: The given index positon to find it value
 * Return: bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin_index;
	int result;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	bin_index = 1 << index;
	result = (bin_index & n);
	return (result ? 1  : 0);
}
