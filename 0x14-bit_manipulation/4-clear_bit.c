#include "main.h"

/**
 * clear_bit - returns the value of the set bit
 * @n: The actual num in dec
 * @index: The given index positon to find it value
 * Return: bit at the given index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin_index;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	bin_index = 1 << index;
	*n = ((*n ^ bin_index) & *n);
	return (1);
}
