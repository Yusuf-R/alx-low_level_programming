#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of
* the two diagonals of a square matrix of integers
* @a: pointer to the array
* @size: size of the array
* Return: returns nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int bk;
	int f_diag;
	int b_diag;

	bk = size * size;
	f_diag = 0;
	b_diag = 0;

	for (i = 0; i < bk; i = i + size + 1)
	{
		f_diag = f_diag + *(a + i);
	}
	for (j = size - 1; j < bk - 1; j = j  + size - 1)
	{
		b_diag = b_diag + *(a + j);
	}
	printf("%d, %d\n", f_diag, b_diag);
}
