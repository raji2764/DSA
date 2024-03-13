// Input Format: N = 6
// Result:   
// 1
// 01
// 101
// 0101
// 10101
// 010101

#include <bits/stdc++.h>

using namespace std;

void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                if(j%2==0)
                {
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
}

int main() {
    
        int n;
        cin >> n;

        nBinaryTriangle(n);
    }

//     #include <bits/stdc++.h>
// using namespace std;

// void pattern11(int N)
// {
//       // First row starts by printing a single 1.
//       int start =1;
      
//       // Outer loop for the no. of rows
//       for(int i=0;i<N;i++){
          
//           // if the row index is even then 1 is printed first
//           // in that row.
//           if(i%2 ==0) start = 1;
          
//           // if odd, then the first 0 will be printed in that row.
//           else start = 0;
          
//           // We alternatively print 1's and 0's in each row by using
//           // the inner for loop.
//           for(int j=0;j<=i;j++){
//               cout<<start;
//               start = 1-start;
//           }
      
      
//         // As soon as the numbers for each iteration are printed, we move to the
//         // next row and give a line break otherwise all numbers
//         // would get printed in 1 line.
//         cout<<endl;
//       }
// }

// int main()
// {   
//     // Here, we have taken the value of N as 5.
//     // We can also take input from the user.
//     int N = 5;
//     pattern11(N);

//     return 0;
// }