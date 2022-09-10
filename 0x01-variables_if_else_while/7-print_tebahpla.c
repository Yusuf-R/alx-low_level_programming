#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will display small case z to a
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha <= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
