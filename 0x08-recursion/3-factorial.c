#include "main.h"

/**
*factorial - The function returns the factorial of a number.
*
*@n: the number
*
*Return: Always 0 if sucess or -1 if Failure
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);

	}
	else
	{
		return (n * factorial(n - 1));
	}
}
