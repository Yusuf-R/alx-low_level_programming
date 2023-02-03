#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will display small case a to z
 * using only putchar
 * and also print out Uppercase A to Z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	return (0);
}
