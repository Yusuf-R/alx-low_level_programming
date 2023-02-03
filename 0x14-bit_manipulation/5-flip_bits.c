#include "main.h"

/**
 * flip_bits - returns the number of bit it takes to
 * get to another value
 * @n: The start number
 * @m: The destination number
 * Return: number of count of the bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int tmp;

	tmp = n ^ m;
	count = 0;
	while (tmp)
	{
		tmp = ((tmp - 1) & tmp);
		count++;
	}
	return (count);
}
