#include "main.h"

/**
 * _4-isalpha - Entry point
 * @c: is ASCII
 * Check if alphabet is lower
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 94) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

