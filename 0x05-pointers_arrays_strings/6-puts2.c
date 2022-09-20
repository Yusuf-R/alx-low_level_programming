#include <stdio.h>
#include "main.h"

/**
* puts2 - Entry point to our function
* @str: a pointer variable that takes string
* Return: 0. For Success
*/

void puts2(char *str)
{
	int counter = 0;

	for (counter = 0; str[counter] != '\0'; counter = counter + 2)
	{
		_putchar(*(str + counter));
	}
}
