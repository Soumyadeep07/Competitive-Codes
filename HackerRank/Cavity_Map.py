#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cavityMap function below.
def cavityMap(grid):
    n=len(grid)
    ans=[]        # 2D ARRAY TO STORE RESULT
    for i in range(n):
        row=""    # STORE THE STRING RESULT OF EACH ROW
        for j in range(n):
            if j!=n-1 and j!=0 and i!=0 and i!=n-1:      # CHECKING FOR NON-BOUNDARY ELEMENTS
                if int(grid[i][j-1])<int(grid[i][j]) and int(grid[i][j+1])<int(grid[i][j]) and int(grid[i][j])>int(grid[i-1][j]) and int(grid[i][j])>int(grid[i+1][j]): 
                    row+='X'
                else: row+=grid[i][j]
            else: row+=grid[i][j]
        ans.append(row)
        
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    grid = []

    for _ in range(n):
        grid_item = input()
        grid.append(grid_item)

    result = cavityMap(grid)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
