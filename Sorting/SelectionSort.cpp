#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                int t=arr[min];
                arr[min]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}