#include "main.h"

/**
 * binary_to_uint - Function converts string to binary
 * @b: pointer to the sring
 * Return: return an unsigned int of binary conversion
 */

unsigned int binary_to_uint(const char *b)
{

	int len = 0, b_index = 0;
	size_t dec_10 = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		len++;
	}
	len--;
	while (len >= 0)
	{
		dec_10 += (b[len] - 48) * (1 << b_index);
		len--;
		b_index++;
	}
	return (dec_10);
}

