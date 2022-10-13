#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - check the code
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*ptr_calc)(int, int);

	if (argc != 4)
	{
		printf("Error 98 %d \n", argc);
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr_calc = get_op_func(argv[2]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error exit 99\n");
		exit(100);
	}
	printf("%d\n", ptr_calc(num1, num2));
	return (0);
}
