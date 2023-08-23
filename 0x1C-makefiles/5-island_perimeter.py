#!/usr/bin/python3
"""func file"""


def island_perimeter(grid):
    """this func"""

    LenOfArr = len(grid)
    if LenOfArr == 0:
        return 0
    EachLineLen = len(grid[0])
    placment = []

    for i in range(LenOfArr):
        for j in range(EachLineLen):
            if grid[i][j] == 1:
                placment.append([i, j])

    if len(placment) == 1:
        return 4

    result = (len(placment) * 4)

    for i in range(len(placment)):
        if i == 0:
            if placment[i][1] == placment[i + 1][1]:
                result -= 1
            if placment[i][0] == placment[i + 1][0]:
                result -= 1
        elif i == (len(placment) - 1):
            if placment[i][1] == placment[i - 1][1]:
                result -= 1
            if placment[i][0] == placment[i - 1][0]:
                result -= 1
        else:
            if placment[i][1] == placment[i + 1][1]:
                result -= 1
            if placment[i][0] == placment[i + 1][0]:
                result -= 1
            if placment[i][1] == placment[i - 1][1]:
                result -= 1
            if placment[i][0] == placment[i - 1][0]:
                result -= 1
    return result
