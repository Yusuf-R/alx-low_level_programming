#include "main.h"

/**
 * more_numbers - To print out 0-14 ten times
 * Return: 0 Success,
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		if ((num >= 10 && num <= 14))
		{
			_putchar(num / 10 + '10');
			_putchar(num % 10 + '10');
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
