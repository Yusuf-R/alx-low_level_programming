#include "main.h"

/**
*_sqrt_recursion - Function returns the natural square root of a number.
*
*@n: number to find its square
*
*Return: Always 0.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (helper(n, 1));
}

/**
*helper - This function will help us get the square
*@n: The square root number we need
*@sq_num: The number that will multiply it self to give us n
*Return: Return the square number
*/


int helper(int n, int sq_num)
{
	if (sq_num > n / 2)
	{
		return (-1);
	}

	if (sq_num * sq_num == n)
	{
		return (sq_num);
	}

	sq_num++;

	return (helper(n, sq_num));
}
