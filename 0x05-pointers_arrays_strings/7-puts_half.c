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
	char storage;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (i =  counter / 2; i < counter; i++)
		_putcar(*(str + i));
	_putchar('\n');
}
