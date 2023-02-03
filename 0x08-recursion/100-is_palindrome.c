#include "main.h"

/**
*length_of_array - Function to find the length of a string.
*
*@s: the pointer to the string it will read
*
*Return: the length of the string
*/

int length_of_array(char *s)
{
	int str_len;
	int i;

	i = 0;
	str_len = 0;
	if (s[i] != '\0')
	{
		str_len += length_of_array(s + 1);
		return (str_len + 1);
	}
	else
		return (0);
}


/**
*is_palindrome - Function reads a string from left-right and right-left and
*check if they are the same.
*
*@s: the pointer to the string it will read
*
*Return: 1 for success else 0.
*/

int is_palindrome(char *s)
{
	int fwd, bkwd;

	bkwd = length_of_array(s) - 1;
	fwd = 0;

	if (length_of_array(s) == 0)
		return (1);
	else
		return (check(s + fwd, s + bkwd));

}


/**
*check - Function that checks the index of the string
*
*@p: the pointer to the first index
*@q: the pointer to the last index
*
*Return: 1 for sucess else 0.
*/


int check(char *p, char *q)
{
	if (p < q)
	{
		if (*p == *q)
		{
			return (check(p + 1, q - 1));
		}
		else
			return (0);
	}
	return (1);
}








