// Input Format: N = 6
// Result:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

#include <bits/stdc++.h>
using namespace std;

//  Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<< j << " ";
            }
            cout << endl;
        }
    }
};

//Driver Code Starts.

int main() {
   
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }