def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    grid: a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically
            (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            Grid is completely surrounded by water, and there is one island
            (or nothing).
            The island doesn’t have “lakes” (water inside that isn’t connected
            to the water around the island).
    """
    # Get the dimensions of the grid
    n_rows = len(grid)
    n_cols = len(grid[0])

    # Initialize the perimeter to 0
    perimeter = 0

    # Loop over each cell in the grid
    for i in range(n_rows):
        for j in range(n_cols):
            # If the cell is land, add 4 to the perimeter
            if grid[i][j] == 1:
                perimeter += 4
                # if there is land to the left and subtract 2 from the p
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
                # Check if there is land above and subtract 2 from the p
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

    return perimeter
