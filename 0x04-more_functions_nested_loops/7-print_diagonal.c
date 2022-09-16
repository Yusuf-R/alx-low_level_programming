#include "main.h"

/**
 * print_diagonal - To print out any number or lines
 * @n: integer parameter
 * Return: 0 Success,
 */

void print_diagonal(int n)
{
	int spacing;
	int user_input;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (user_input = 0; user_input < n; user_input++)
	{
		_putchar('\\');
		_putchar('\n');
		for (spacing = 0; spacing < user_input; spacing++)
		{
			_putchar(' ');
		}
	}
}
