#include <bits/stdc++.h> 
using namespace std; 

void rotatearray(int arr[], int n, int d)
{
    int temp[n];
    //copy an original array into the temporary array
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    //rotate element by d times
    int start = d%n;
    for(int i=0;i<n;i++)
    {
        arr[i] = temp[(start+i)%n];
    }
    
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    // take input element in the array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // method to rotate an array with d time
    rotatearray(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}