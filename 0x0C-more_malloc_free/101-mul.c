#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void Error(void);
int _putchar(char c);
int digit_check(char *s);

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
		len++;
	}
	return (len);
}
/**
 * digit_check - check if string is digit
 * @s: the pointer to the string
 * Return: the Error if false
 */

int digit_check(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i]  > '9')
			return (1);
	}
	return (0);
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
 *main - the progrma multiplies two positive number
 *@argc: Argument count
 *@argv: vector pointer
 *Return: the product of twon numbers
 */

int main(int argc, char **argv)
{
	char *input_1, *input_2;
	int *xly, zero, i, flg, len1, len2, rem, ext, total_len, d1, d2;

	ext = 2, flg = zero = 0;

	input_1 = argv[1], input_2 = argv[2];
	if (argc != 3 || digit_check(input_1) == 1 || digit_check(input_2) == 1)
		Error();
	len1 = str_cnt(input_1), len2 = str_cnt(input_2);
	total_len = len1 + len2 + 1;
	xly = malloc(sizeof(int) * total_len);
	if (xly == NULL)
		return (1);
	for (i = 0; i < total_len; i++)
		xly[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = input_1[len1] - 48, rem = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			d2 = input_2[len2] - 48;
			rem += xly[len1 + len2 + ext] + (d1 * d2);
			xly[len1 + len2 + ext] = rem % 10;
			rem = rem / 10;
		}
		if (rem > 0)
			xly[len1 + len2 + ext] += rem;
	}
	for (i = 0; i < total_len; i++)
	{
		if (xly[i])
			flg = 1;
		if (flg)
			_putchar(xly[i] + '0');
	}
	if (flg == 0)
		_putchar(48);
	_putchar(10);
	free(xly);
	return (0);
}
