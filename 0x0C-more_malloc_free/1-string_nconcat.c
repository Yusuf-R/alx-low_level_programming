#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*string_nconcat - this a function concatenates two string base on
*the number of n bytes.
*
*@s1: the string 1
*@s2: the string 2
*@n: the number of bytes to be copied from s1
*Return: Returns concat of the two string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1] && s1)
	{
		len1++;
	}
	while (s2[len2] && s2)
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	memory = malloc(sizeof(char) * (len1 + n + 1));
	if (memory == NULL)
	{
		return (NULL);
	}
	while (s1[i] && s1)
	{
		memory[i] = s1[i];
		i++;
	}
	while (j < n && s2)
	{
		memory[i + j] = s2[j];
		j++;
	}
	memory[i + j] = '\0';

	return (memory);
}
