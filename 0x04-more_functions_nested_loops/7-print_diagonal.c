#include "main.h"

/**
 * print_diagonal - To print out any number or lines
 * @n: integer parameter
 * Return: 0 Success,
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		_puthcar('\n');
		n--;
	}
	_putchar('\n');
}
