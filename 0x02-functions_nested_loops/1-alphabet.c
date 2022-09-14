#include "main.h"

/**
 * print_alphabet - Entry point
 * print_alphabet from a-z with a function
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int letters;

	for (letters = 97; letters <= 122; letters++)
	{
		_putchar(letters);
	}
}

