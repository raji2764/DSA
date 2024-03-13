// Input Format: N = 6
// Result:   
// 1          1
// 12        21
// 12       321
// 1234    4321
// 12345  54321
// 123456654321

#include <bits/stdc++.h>

using namespace std;

void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=i+1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    
        int n;
        cin >> n;

        numberCrown(n);
    }


// #include <bits/stdc++.h>
// using namespace std;

// void pattern12(int N)
// {
//       // initial no. of spaces in row 1.
//       int spaces = 2*(N-1);
      
//       // Outer loop for the number of rows.
//       for(int i=1;i<=N;i++){
          
//           // for printing numbers in each row
//           for(int j=1;j<=i;j++){
//               cout<<j;
//           }
          
//           // for printing spaces in each row
//           for(int j = 1;j<=spaces;j++){
//               cout<<" ";
//           }
          
//           // for printing numbers in each row
//           for(int j=i;j>=1;j--){
//               cout<<j;
//           }
          
//           // As soon as the numbers for each iteration are printed, we move to the
//           // next row and give a line break otherwise all numbers
//           // would get printed in 1 line.
//           cout<<endl;
          
//           // After each iteration nos. increase by 2, thus
//           // spaces will decrement by 2.
//           spaces-=2;
//       }
// }

// int main()
// {   
//     // Here, we have taken the value of N as 5.
//     // We can also take input from the user.
//     int N = 5;
//     pattern12(N);

//     return 0;
// }