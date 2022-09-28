#include "main.h"

/**
*_print_rev_recursion - The function prints a string followed
*by a new line in the reverse form.
*
*@s: pointer to the string to be modified
*
*Return: Always 0.
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	{
		_putchar(10);
	}
}
