#include "main.h"

/**
 * print_last_digit - To print last digit of two numbers
 * @digits : is an integer value
 * Return: Always 0 (Success)
 */
int print_last_digit(int digits)
{
	int last_digits;

	last_digits = digits % 10;
	if (last_digits < 0)
	{
		_putchar(-last_digits + 48);
		return (-last_digits);
	}
	else
	{
		_putchar(last_digits + 48)
			return (last_digits);
	}
}
