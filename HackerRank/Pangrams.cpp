#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

         // QUESTION LINK-> https://www.hackerrank.com/challenges/pangrams/problem            ( HACKERRANK ID -> Im07SD )
                   // **** START OF MY CODE **** ??
                   
 int alphabet[26]={0},i,j,n,sep,flag=100;
 n=s.length();
 for(i=0;i<n;i++){
     sep=s[i];         // SEP IS AN INTEGER VARIABLE SO IT WILL STORE THE ASCII VALUE OF S[i]
     if(sep>=65 && sep<=96) alphabet[sep-65]+=1;         // ASCII 65-96 LOWERCASE CHECK ; ASCII 97 TO REST UPPERCASE CHECK
     else alphabet[sep-97]+=1;
 }
 for(i=0;i<26;i++){ if(alphabet[i]==0){ flag=0; break;}}
 if(flag) return "pangram";
 else return "not pangram";
 
                  // **** END OF MY CODE **** ??
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
