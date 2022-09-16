#include "main.h"

/**
 * print_line - To print out any number or lines
 * @n: integer parameter
 * Return: 0 Success,
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
