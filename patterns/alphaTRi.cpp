#include <bits/stdc++.h>

using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    int N=n;
    for(int i=0;i<N;i++){
        char ch=65+n-1;
        for(char j=0;j<=i;j++)
        {
            cout<<ch--<<" ";
        }
        cout<<endl;
      }
}

int main() {
    
        int n;
        cin >> n;

        alphaTriangle(n);
    }
   