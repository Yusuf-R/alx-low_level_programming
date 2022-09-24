#include <stdio.h>
#include "main.h"

/**
* string_toupper -  a function that changes all
* lowercase letters of a string to uppercase
* @s: a pointer to the string that witll be converted to upper case
* Return: returns a pointer
*/
char *string_toupper(char *s)
{
	int counter

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] >= 97 && s[counter] <= 122)
			s[counter] = s[counter] -32;
	}
	return (s);
}
