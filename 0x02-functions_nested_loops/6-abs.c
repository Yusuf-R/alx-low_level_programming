#include "main.h"

/**
 * _abs - To compute the absolute value of a numeber
 * To find absolute value of a numnber
 * @n: is an integer
 * int: integer declartion
 * Prints out the sighn of a number inpute
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return ((-1 * n));
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
