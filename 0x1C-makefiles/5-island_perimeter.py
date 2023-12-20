#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid.
    0 represents a water zone, 1 represents a land zone.
    Cells are connected horizontally/vertically (not diagonally).
    The grid is rectangular, surrounded by water, and contains a single island without lakes.
    """
    rows = len(grid)
    cols = len(grid[0]) if rows else 0
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Check top
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1
                # Check bottom
                if r == rows-1 or grid[r+1][c] == 0:
                    perimeter += 1
                # Check left
                if c == 0 or grid[r][c-1] == 0:
                    perimeter += 1
                # Check right
                if c == cols-1 or grid[r][c+1] == 0:
                    perimeter += 1
    return perimeter

