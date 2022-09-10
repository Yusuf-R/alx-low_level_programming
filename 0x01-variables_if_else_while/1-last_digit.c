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
 * upon the last number genrated
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char Op[] = "Last digit of";
	char Out_1[] = "and is greater than 5";
	char Out_2[] = "and is less than 6 and not 0";
	char Out_3[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%s %d is %d %s\n", Op, n, last_digit, Out_1);
	}
	else if (n == 0)
	{
		printf("%s %d is %d %s\n", Op, n, last_digit, Out_3);
	}
	else if (n < 6)
	{
		printf("%s %d is %d %s\n", Op, n, last_digit, Out_2);
	}
	return (0);
}
