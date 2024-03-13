#include <bits/stdc++.h>

using namespace std;


void nNumberTriangle(int n) {
// Write your code here.
int p=1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<p++<<" ";
    }
    cout<<endl;
}
}


int main() {
    
        int n;
        cin >> n;

        nNumberTriangle(n);
    }