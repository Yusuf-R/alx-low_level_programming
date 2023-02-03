#include "main.h"

/**
 * print_triangle - To print out a square of ##
 * @size: an integer parameter for the triangle
 * Return: 0 Success
 */

void print_triangle(int size)
{
	int rows, cols;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (rows = 1; rows <= size; rows++)
	{
		for (cols = rows; cols < size; cols++)
		{
			_putchar(' ');
		}
		for (cols = 1; cols <= rows; cols++)
		{
			_putchar('#');
		}

	_putchar('\n');

	}
}
