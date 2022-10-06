#include "main.h"
#include "stddef.h"
#include "stdlib.h"

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
	char *mem;
	int len1, len2, sum_len;

	len1 = len2 = sum_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '0'; i++)
		len2++;
	if (n >= len2)
		sum_len = len1 + len2;
	else if (n < len2)
		sum_len = len1 + n;
	memory = malloc(sizeof(*memory) * sum_len);
	if (memory == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
		memory[j] = s1[j];
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
		{
			memory[len1 + j] = s2[j];
		}
		memory[len1 + len2] = '\0';
	}
	else if (n < len2)
	{
		for (j = 0; j < n; j++)
		{
			memory[len1 + j] = s2[j];
		}
		memory[len1 + n] = '\0';
	}
	return (memory);
}
