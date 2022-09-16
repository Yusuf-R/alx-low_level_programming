#include "main.h"

/**
 * more_numbers - To print out 0-14 ten times
 * Return: 0 Success,
 */

void more_numbers(void)
{
	int num_i, num_j;
	int q, iter;

	for (iter = 0; iter <= 10; iter++)
	{
		for (q = 0; q <= 14; q++)
		{
			num_i = q/10;
			num_j = q%10;
			if (q >= 10)
			{
				_putchar(num_i + '0');
			}
		_putchar(num_j + '0');
		}
	_putchar('\n');
	}
}

