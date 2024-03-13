// Input Format: N = 6
// Result:
// * * * * * *
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0;i<n;i++)
	    {
	        for(int j=n;j>=i+1;j--)
	        {
	            cout<<"* ";
	        }
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
   