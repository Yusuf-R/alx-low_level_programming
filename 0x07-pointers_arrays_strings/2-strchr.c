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
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		else
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (NULL);
}
