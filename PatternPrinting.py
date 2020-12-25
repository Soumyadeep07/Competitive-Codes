# PATTERN PRINTING
'''
  2
 21
210
 21
  2
    4
   43
  432
 4321
43210
 4321
  432
   43
    4    
       7
      76
     765
    7654
   76543
  765432
 7654321
76543210
 7654321
  765432
   76543
    7654
     765
      76
       7
'''
for _ in range(int(input())):       # No. of test cases
    n=int(input())                  # Integer input
    # Logic part begins
    for i in range(1,n+2):
        for k in range(n+1-i): print(" ",end="")
        c=0
        for j in range(n,-1,-1):
            if c<i:
                print(j,end="")
                c+=1
            else: break
        print()
    # Lower half of code
    for i in range(1,n+1):
        for k in range(i): print(" ",end="")
        c=0
        for j in range(n,-1,-1):
            if c<(n+1-i):
                print(j,end="")
                c+=1
            else: break
        print()
