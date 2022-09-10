#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program will generate random number
 * base upon time algorithm
 * and a test condition will be
 * performed to  display
 * positve or negative or zero based
 * upon the number genrated
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d number is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d number is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d number is positive\n", n);
	}
	return (0);
}
