#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the chocolateFeast function below.
def chocolateFeast(n, c, m):

                    # ***** START OF MY CODE ****** #
                    
    start=n//c    # INDICATES INITIAL NO OF CHOCOLATES
    ans,wrapper=start,start    # WRAPPER AT EVERY STEP
    while wrapper>=m:
        #ans+=wrapper
        extra=wrapper//m      # EXTRA-> CHOCOLATES USING WRAPPERS
        left=wrapper%m        # LEFT-> WRAPPERS LEFT AFTER REDEEM
        if extra==0: break    # IF 0 NO MORE EXCHANGE POSSIBLE
        else:
            ans+=extra
            wrapper=extra+left
    return ans
                  # ****** END OF MY CODE ****** #


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        ncm = input().split()

        n = int(ncm[0])

        c = int(ncm[1])

        m = int(ncm[2])

        result = chocolateFeast(n, c, m)

        fptr.write(str(result) + '\n')

    fptr.close()
