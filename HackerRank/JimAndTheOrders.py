#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jimOrders function below.
def jimOrders(orders):
                    # CODE LINK-> https://www.hackerrank.com/challenges/jim-and-the-orders/problem       ( HACKERRANK ID ->Im07SD )
                         # ****START OF MY CODE **** #
    a,ans=[],[]
    n=len(orders)
    for i in range(n):
        a.append([i+1,(orders[i][0]+orders[i][1])])        # APPENDING ORDER NO AND TIME
        
    a=sorted(a,key=lambda x: x[1])    # *** THIS FUNCTION SORT ANY 2D ARRAY ON THE BASIS OF A COLUMN
    
    for i in range(n): ans.append(a[i][0])
    return ans
                       # **** END OF MY CODE **** #

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    orders = []

    for _ in range(n):
        orders.append(list(map(int, input().rstrip().split())))

    result = jimOrders(orders)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
