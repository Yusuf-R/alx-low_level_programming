#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will display the hex
 * 0 to 9 through a to f
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int Num;

	for (Num = '0'; Num <= '9'; Num++)
	{
		putchar(Num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
