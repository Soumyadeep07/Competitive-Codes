# QUESTION LINK -> https://www.hackerrank.com/challenges/lisa-workbook/problem
# HACKERRANK ID -> Im07SD

def workbook(n, k, arr):
    pageno,qsn_start,qsn_end=1,1,0     # PAGENO -> STORES CURRENT PAGE NO OF THE BOOK       QSN_START-> STARTING QSN NO AT THAT PAGE   
    res=0                              # QSN_END-> END QUESTION NO AT THAT PAGE             RES-> STORES THE RESULT
    for i in range(n):
        
        while qsn_end<=arr[i]:         # ITERATE UPTO THE END QUESTION
            
            if qsn_end+k>arr[i]: qsn_end=arr[i]
            else: qsn_end= qsn_end+k
     
            if (pageno>=qsn_start) and (pageno<=qsn_end):      # CONDITION CHECK IF QSN NO LIES IN THAT PAGE
                res+=1
                
            pageno+=1
            if qsn_start+k>arr[i]:       # TERMINATE THE LOOP IF QSN_START> GIVEN NO OF QSNs
                qsn_start,qsn_end=1 ,0
                break
            else: qsn_start+=k
    return res
    
n,k=map(int,input().split())         # INPUT PART AND PRINT RESULT
a=list(map(int,input().split()))
print(workbook(n,k,a))
