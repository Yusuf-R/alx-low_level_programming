#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: largeest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}