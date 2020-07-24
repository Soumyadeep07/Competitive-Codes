#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.  Return the minimum number of characters to make the password strong
int minimumNumber(int n, string password) {

                           // QUESTION LINK-> https://www.hackerrank.com/challenges/strong-password/problem          ( HACKERRANK ID -> Im07SD )
                                                         // **** START OF MY CODE **** ??
    int i,ascii,num=0,small=0,cap=0,spec=0,ans=0;
    for(i=0;i<n;i++){
        ascii=password[i];
        if( ascii>=48 && ascii<=57 ) num=1;
        if( ascii>=65 && ascii<=90 ) cap=1;
        if( ascii>=97 && ascii<=122 ) small=1;
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' 
            || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+' || password[i]=='"') spec=1;
    }
    if(!num) ans+=1; if(!cap) ans+=1; if(!small) ans+=1; if(!spec) ans+=1;
    if(n<6) 
        { if(6-n>=ans) ans=(6-n); }
    return ans;
                                                     // **** END OF MY CODE **** ??
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
