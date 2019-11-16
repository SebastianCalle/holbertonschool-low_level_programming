#!/usr/bin/python3


def island_perimeter(grid):
    """Return the perimeter of the island grid"""
    count = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x-1][y] == 0:
                    count += 1
                if len(grid) - 1 == 0 or grid[x+1][y] == 0:
                    count += 1
                if y == 0 or grid[x][y-1] == 0:
                    count += 1
                if len(grid[x]) == 0 or grid[x][y+1] == 0:
                    count += 1
    return count
