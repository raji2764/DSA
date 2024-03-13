#include <bits/stdc++.h>

using namespace std;


void alphaRamp(int n) {
    // Write your code here.
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}


int main() {
    
        int n;
        cin >> n;

        alphaRamp(n);
    }