#include <stdio.h>
#include "main.h"

/**
* puts_half - Entry point to our function
* @str: a pointer variable that takes string
* Return: 0. For Success
*/

void puts_half(char *str)
{
	int counter = 0;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	for (i = ((counter - 1) / 2) + 1 ; i < counter; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
