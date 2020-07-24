#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {

                                       // QUESTION LINK -> https://www.hackerrank.com/challenges/grid-challenge/problem         ( HACKERRANK ID -> Im07SD )
                                                // **** START OF MY CODE **** ??

int row=grid.size(),i,j,f=100; 
string ans="YES";
int col=grid[0].size();          // BECAUSE IT IS NOT A SQUARE GRID
for (i=0;i<row;i++) sort(grid[i].begin(),grid[i].end());          // SORTING EACH ROW ALPHABETICALLY  
for (i=0;i<col;i++){
    for(j=0;j<row;j++){
        if(j!=0){
        if( grid[j][i] < grid[j-1][i] ) { ans="NO"; f=0; break; }     // IF ANY COLUMN VALUE IS SMALLER THAN ITS PREVIOUS COLUMN OF SAME ROW THEN ANS-> NO
    }
    } if(f==0) break;
}   
      return ans;
                                                   // **** END OF MY CODE **** ??
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
