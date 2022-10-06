#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
*str_len - this a function finds the length of string
*@sx: string
*Return: the length of string.
*/

int str_len(char *sx)
{
	int len;
	int i;

	len = 0;
	if(sx == NULL)
		len = 0;
	else
	{
		for(i = 0; sx[i] != '\0'; i++)
		{
			len++;
		}
	}
	return(len);
}

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
	unsigned int j, len1, len2, sum_len;

	len1 = len2 = sum_len = 0;
	len1 = str_len(s1);
	len2 = str_len(s2);
	if(n >= len2)
		sum_len = len1 + len2;	
	else (n < len2)
		sum_len = len1 + n;
	memory = malloc(sizeof(*memory) * (sum_len + 1));
	if (memory == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
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
