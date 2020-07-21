#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the gemstones function below.
def gemstones(arr):
                       # **** START OF MY CODE **** #
    n=len(arr)
    alphabet=[0]*26
    for i in range(n):
        for j in range(97,123):      # CHECK FOR EACH CHARACTER IF IT IS PRESENT IN ARR[i] OR NOT
            if chr(j) in arr[i]:     # CHR() RETURNS THE ASCII CHARACTER OF THAT INTEGER
                alphabet[(j-97)]+=1
    result=0
    for i in range(26):
        if alphabet[i]==n: result+=1      # COUNT FOR ALPHABETS THAT CONTAINS IN EACH TERM
    return result
                      # **** END OF MY CODE **** #

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = input()
        arr.append(arr_item)

    result = gemstones(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
