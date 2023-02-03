#include <stdio.h>
#include "main.h"

/**
* _strchr - This function will find any instance of the seacrh charcter
* @s: The pointer to the string
* @c: The seach charcter of choice
* Return: Returns O. for Success
*/

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		else
		if (*s == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
