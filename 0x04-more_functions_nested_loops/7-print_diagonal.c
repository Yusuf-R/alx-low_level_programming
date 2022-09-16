#include "main.h"

/**
 * print_diagonal - To print out any number or lines
 * @n: integer parameter
 * Return: 0 Success,
 */

void print_diagonal(int n)
{
	int spacing;
	int use_input;

	for (user_input = 1; user_input <= n; user_input++)
	{
		_putchar('\\');
		_putchar('\n');
		for (spacing = 1; spacing <= user_input; user_input++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
