#include <stdio.h>
#include "main.h"

/**
* _strpbrk - This function will find the first character in the
* in the s string that mtches any character specifed by accept
* @s: The pointer to the string to be scanned
* @accept: The string containg the character to match
* Return: Returns a pointer to the character in s tha mathces
* the character in accept, else returns NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int len1, len2;
	int i, j, k;

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; accept[len2] != '\0'; len2++)
	{
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				for (k = i; s[k] != '\0'; k++)
				{
					return (s);
				}
			}
			else
				return (NULL);
		}
	}
	return (NULL);
}
