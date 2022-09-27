#include <stdio.h>
#include "main.h"

/**
* _strstrk - This function is used  used to return the first
* occurrence of the substring str2 in a string str1
* @haystack: The pointer to the string to be scanned
* @needle: The string containg the character to match
* Return: returns a pointer to the located string, or
* a null pointer if the string is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int len1, len2;
	int i, j;

	for (len1 = 0; haystack[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; needle[len2] != '\0'; len2++)
	{
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j]
			return (&haystack[i]);

	}
	return (NULL);
}
