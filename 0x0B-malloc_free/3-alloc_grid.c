#include "main.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

/**
**alloc_grid - this function function that returns a pointer to a
*2 dimensional array of integers to the newly allocated space in memory.
*
*@width: similar to the columbs
*@height: similar to the rows
*
*Return: Returns 0 the concatenation and error for NULL
*/

int **alloc_grid(int width, int height)
{
	int **mem2D;
	int row_h, col_w, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem2D = (int **) malloc(sizeof(int *) * height);

	if (mem2D == NULL)
	{
		return (NULL);
	}
	for (row_h = 0; row_h < height; row_h++)
	{
		mem2D[row_h] = (int *)malloc(sizeof(int) * width);
			if (mem2D[row_h] == NULL)
			{
				for (j = 0; j <= row_h; j++)
				{
					free(mem2D[j]);
				}
				free(mem2D);
				return (NULL);
			}
		for (col_w = 0; col_w < width; col_w++)
		{
			mem2D[row_h][col_w] = 0;
		}
	}
	return (mem2D);
}
