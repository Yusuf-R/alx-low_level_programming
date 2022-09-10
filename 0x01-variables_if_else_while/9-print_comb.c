#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Print 0 to 9 with spaces and commas
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo;

	for (combo = '0'; combo <= '9'; combo++)
	{
		putchar(combo);
		if (combo == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
