#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
                           
                           // QUESTION LINK -> https://www.hackerrank.com/challenges/angry-children/problem           ( HACKERRANK ID -> Im07SD )
                                // **** START OF MY CODE **** ??
    int n=arr.size();
    sort(arr.begin(),arr.end());        // SORT THE ARRAY TO SOLVE IT IN O(n) TIME COMPLEXITY
    long i=0,j=k-1,min=9999999999;
    for(i=0,j=k-1;i<n-k,j<n;i++,j++){        // I DENOTES THE START OF SUBARRAY; J DENOTES THE END OF SUBARRAY
            if( (arr[j]-arr[i]) < min ) min=(arr[j]-arr[i]);
    }
    return min;
                             // **** END OF MY CODE **** ??
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
