#include "main.h"

/**
 * times_table - Prints the times table of order 9
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r1_x, r2_x, out;

	for (r1_x = 0; r1_x <= 9; r1_x++)
	{
		_putchar(48);
		for (r2_x = 1; r2_x <= 9; r2_x++)
		{
			out = r1_x * r2_x;
			_putchar(44);
			_putchar(32);
			if (out <= 9)
			{
				_putchar(32);
				_putchar(out + 48);
			}
			else
			{
				_putchar((out / 10) + 48);
				_putchar((out % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
