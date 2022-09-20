#include <stdio.h>
#include "main.h"

/**
* _puts - Entry point to our function
* @str: a pointer variable that takes string
* Return: 0. For Success
*/

void _puts(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		_putchar(*(str + counter));
	}
}
