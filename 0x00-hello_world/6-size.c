#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int  i;
	long int j;
	long long int k;
	float f;

	printf("Size of a char: %zd byte(s)\n", sizeof(c));
	printf("Size of an int : %zd byte(s)\n", sizeof(i));
	printf("Size of a long int: %zd byte(s)\n", sizeof(j));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(k));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
