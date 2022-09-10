#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will display number 0 to 9
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_out;

	for (num_out = 0; num_out <= 9; num_out++)
	{
		printf("%d", num_out);
	}
	printf("\n");
	return (0);
}
