#include "main.h"

/**
 * print_square - To print out a square of ##
 * @size: an integer parameter for the square
 * Return: 0 Success
 */

void print_square(int size)
{
	int sq_rows;
	int sq_cols;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sq_rows = 1; sq_rows <= size; sq_rows++)
	{
		for (sq_cols = 1; sq_cols <= size; sq_cols++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
