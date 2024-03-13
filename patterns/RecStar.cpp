// Input: 5

// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void RecStar(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    RecStar(n);
}

