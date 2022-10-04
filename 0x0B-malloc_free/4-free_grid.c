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
*Return: Returns nothing.
*/

void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		free(grid);
	}	
}
