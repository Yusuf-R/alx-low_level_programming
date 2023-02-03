#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will display small case a to z
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
