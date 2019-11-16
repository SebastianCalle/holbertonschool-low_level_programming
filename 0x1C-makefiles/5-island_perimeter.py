#!/usr/bin/python3


def island_perimeter(grid):
    """Return the perimeter of the island grid"""
    width = 0
    tmp_w = 0
    height = 0
    f = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if f == 0:
                    height += 1
                    f = 1
                tmp_w += 1
            if width < tmp_w:
                width = tmp_w
        f = 0
        tmp_w = 0

    perimeter = (width + height) * 2
    return perimeter
