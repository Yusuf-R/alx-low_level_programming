#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * print_alphabet from a-z with a function
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int repeat;
	int letters;

	for (repeat = 1; repeat <= 10; repeat++)
	{
		for (letters = 97; letters <= 122; letters++)
		{
		_putchar(letters);
		}
	_putchar('\n');
	}
}

