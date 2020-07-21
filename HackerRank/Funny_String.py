#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the funnyString function below.
def funnyString(s):
                          # **** START OF MY CODE ***** #
    n=len(s)
    d_front,d_back=[],[]  # STORES ADJACENT DIFF IN BOTH DIRECTION
    for i in range(1,n): d_front.append(abs(ord(s[i])-ord(s[i-1])))    # FRONT
    for i in range(n-1,0,-1): d_back.append(abs(ord(s[i-1])-ord(s[i])))    # REVERSE
    
    if d_front==d_back: return "Funny"
    else: return "Not Funny"
                          
                          # **** END OF MY CODE **** #
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)

        fptr.write(result + '\n')

    fptr.close()
