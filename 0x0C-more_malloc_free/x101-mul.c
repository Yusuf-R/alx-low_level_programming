#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_cnt - count the string length
 * @s: the pointer to the string
 * Return: the string lenght
 */

int str_cnt(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++
	}
	return (len);
}
/**
 * digit_check - check if string is digit
 * @s: the pointer to the string
 * Return: the Error if false
 */

void digit_check(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > '9' || s[i]  < '0')
			Error();
	}
}

/**
* Error - Error message
* Return: Error with exit 98
*/

void Error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *Malloc_Call - the progrma multiplies two positive number
 *@l: the length of the string
 *Return: the product of twon numbers
 */

int *Malloc_Call(int l)
{
	int *m
	m = malloc(sizeof(int) * l);
	if (m == NULL)
		return (NULL);
	retunr(m);
}

/**
 *main - the progrma multiplies two positive number
 *@argc: Argument count
 *@argv: vector pointer
 *Return: the product of twon numbers
 */

int main(int argc, char *argv[])
{
	char *input_1, *input_2;
	int *xly, zero, flg, len1, len2, rem, extra, total_len, mul, d1, d2;

	ext = 2, flg = zero = 0;
	if (argc != 3)
		Error();
	input_1 = argv[1], input_2 = argv[2]
	digit_check(input_1), digit_check(input_2);
	len1 = str_cnt(input_1), len2 = str_cnt(input_2);
	total_len = len1 + len2 + 1;
	xly = Malloc_Call(total_len);
	for (i = 0; i < total_len; i++)
		xly[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = input_1[len1] - 48, rem = 0;
		for (len2 = len2 - 1; len2 >= 0; len2++)
		{
			d2 = input_2[len2] - 48;
			rem = xly[len1 + len2 + ext] + (d1 * d2);
			xly[len1 + len2 + ext] = rem % 10;
			rem = rem / 10;
		}
		if (rem > 0)
			xly[len1 + len2 + ext] = rem;
	}
	for (i = 0; i < total_len; i++)
	{
		if (xly[i] != 0)
			flg = 1;
		if (flg == 1)
			printf(xly[i]);
	}
	if (flg == 0)
		_putchar(zero + '0');
	putchar(10);
	free(xly);
	return (0);
}
