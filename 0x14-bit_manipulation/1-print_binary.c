#include "main.h"

/**
 * print_binary - Function converts string to binary
 * @n: pointer to the sring
 * Return: return an unsigned int of binary conversion
 */

void print_binary(unsigned long int n)
{
	unsigned long bit;

	if (n == 0)
		_putchar(48);
	else
		for (bit = 1lu << 63; bit != 0; bit >>= 1)
		{
			if (n & bit)
			{
				while (bit)
				{
					_putchar((n & bit) ? '1' : '0');
					bit >>= 1;
				}
			}
		}
}
