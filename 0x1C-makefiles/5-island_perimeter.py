#!/usr/bin/python3
"""Return the perimeter of the island grid"""


def island_perimeter(grid):
    count = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    count += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    count += 1
                if y == 0 or grid[x][y - 1] == 0:
                    count += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    count += 1

    return count
