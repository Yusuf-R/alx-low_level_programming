#include "main.h"

/**
 * more_numbers - To print out 0-14 ten times
 * @n: integer parameter
 * Return: 0 Success,
 */

void print_line(int n)
{
	while(n > 0)
	{
		_putchar('_');
		n--;
	}
	putchar('\n');
}
