#include "main.h"

/**
 * print_numbers - To print out 0-9
 * Return: 0 Success,  It returns the product of two numbers
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
		_putchar('\n');
	}
}
