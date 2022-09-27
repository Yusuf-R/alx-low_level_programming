#include <stdio.h>
#include "main.h"

/**
* _strspn - This function will find any instance of the seacrh charcter
* @s: The pointer to the string
* @accept: The seach charcter of choice
* Return: Returns O. for Success
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}

	return (count);
}
