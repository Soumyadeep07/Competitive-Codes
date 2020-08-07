# ALL PRIME NUMBERS UPTO AND INCLUSIVE N
# RETURN LIST OF ALL PRIME NO.

from math import sqrt
n=int(input())
if n<=1: print("EMPTY SET")
else:
    a=[2]
    for i in range(3,n+1):
        f=9
        for j in range(2,int(sqrt(i))+1):
            if i%j==0: 
                f=8
                break
        if f!=8: a.append(i)
    print(a)
