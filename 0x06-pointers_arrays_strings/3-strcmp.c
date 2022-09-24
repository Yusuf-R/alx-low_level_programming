#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the string to be compared to
* @s2: the string being compared
* Return: returns -15 if s1 < s2, 15 if s1 > s2
* and returns 0 if they're equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int a1;
	int a2;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	a1 = (int) s1[i];
	a2 = (int) s2[i];

	if (a1 > a2)
		return (a1 - a2);
	if (a2 > a1)
		return (a1 - a2);
	}
}
