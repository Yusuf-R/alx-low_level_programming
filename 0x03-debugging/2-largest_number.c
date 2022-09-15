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

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (a == b && b > c)
	{
		largest = a;
	}
	else if (b == c && b > a)
	{
		largest = b;
	}
	else if (c > a && a == b)
	{
		largest = c;
	}
	else if (a == b && b == c)
	{
		largest = a;
	}

	retutn(largest);
}
