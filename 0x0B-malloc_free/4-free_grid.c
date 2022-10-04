#include "main.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

/**
*free_grid - this function that frees a 2 dimensional grid previously created.
*
*@grid: The previous NxM matrix created
*@height: similar to the rows
*
*Return: Returns the matrix and error for NULL
*/

void free_grid(int **grid, int height)
{
	int row_h;

	for (row_h = 0; row_h < height; row_h++)
	{
		free(grid);
	}
}
