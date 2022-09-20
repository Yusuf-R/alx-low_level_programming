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

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(*(str + counter));
		{
		counter++;
	}
	_putchar(10);
}
