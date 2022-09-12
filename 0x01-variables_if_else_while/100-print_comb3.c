#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * To Print 00 to 99 with spaces and commas
 * using only putchar with combination
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x_i, y_i;
	int tens, units;

	for (i = 0; i < 100; i++)
	{
		x_i = i / 10;
		y_i = i % 10;
		for (j = i; j <= i; j++)
		{
			if (y_i == 0 | x_i == y_i | x_i == y_i + 1
					| x_i == y_i + 2 | x_i == y_i + 3
					| x_i == y_i + 4 | x_i == y_i + 5
					| x_i == y_i + 6 | x_i == y_i + 7
					| x_i == y_i + 8 | x_i == y_i + 9)
				continue;

		tens = (x_i + '0');
		units = (y_i + '0');
		putchar(tens);
		putchar(units);
		if (tens == '8' && units == '9')
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
