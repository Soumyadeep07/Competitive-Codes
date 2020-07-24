#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
                                   // QUESTION LINK -> https://www.hackerrank.com/challenges/caesar-cipher-1/problem       ( HACKERRANK ID -> Im07SD )
                                           // **** START OF MY CODE **** ??
                                           
string ans=""; k=k%26;  // K%26 FOR REPEATATION
char pos; int ch;
for(int i=0;i<s.length();i++){
    ch=s[i];
    if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) ){       // CHECK IF IT IS AN ALPHABET OR NOT
        if(ch<97){         // CHECK IF IT IS UPPERCASE OR LOWERCASE
            ch+=k;
            if(ch>90) ch-=26;         // LIMIT TO CIRCULAR UPPERCASE
            pos=ch;
            ans+=pos;
        }
        else{
            ch+=k;
            if(ch>122) ch-=26;          // LIMIT TO CIRCULAR LOWERCASE
            pos=ch;
            ans+=pos;
        }
    }
    else { ans+=s[i]; }
}   return ans;
                                          // **** END OF MY CODE **** ??
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
