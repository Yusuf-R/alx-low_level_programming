#include <stdio.h>
#include "main.h"

/**
* rev_string - Entry point to our function
* @s: a pointer variable that takes string
* Return: 0. For Success
*/

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
