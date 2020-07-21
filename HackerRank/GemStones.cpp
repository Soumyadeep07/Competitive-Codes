// QUESTION LINK - https://www.hackerrank.com/challenges/gem-stones/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
 int n; cin>>n;
 vector<string> arr;
 string s;
 for(int t=0;t<n;t++){ cin>>s; arr.push_back(s); }  // INPUT OF ELEMENTS
 int i,j,result=0,alphabet[26]={0};    // INITIALISING COUNT OF EACH ALPHABET TO 0
 
 // THE LOGIC IS TO CHECH FOR EACH ALPHABET(a-z) IN EACH STRING OF ARRAY, IF FOUND INCREMENT THAT ALPHABET INDEX TO 1
 // AT LAST THE NO OF INTEGERS IN ALPHABET[] THAT COUNTS TO N IS THE REQUIRED ANSWER...
 
 char a;
 for(i=0;i<n;i++){
     s=arr[i];     // STORES THE STRING AT iTH ELEMENT OF ARR
     for(j=97;j<123;j++){
         a=j;      // STORES THE CHARACTER EQUIVALENT TO EACH ASCII
         for(int k=0; s[k]!='\0';k++){
             if(a==s[k]){
                 alphabet[(j-97)]+=1;
                 break;
             }
         }
     }
 }
 for(i=0;i<26;i++)  if(alphabet[i]==n) result+=1;     // COUNT ALPHABETS EQUAL TO N
 cout<<result<<"\n";
 
}

// @UTHOR SOUMYADEEP GUIN HACKERRANK ID -> Im07SD
