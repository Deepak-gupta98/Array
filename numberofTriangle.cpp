#include<bits/stdc++.h>
using namespace std;

int findNumberOfTriangles(int arr[], int n)
{
    int count=0;
    if(n<3)
    {
        return count;
    }
    //sort an array in the increasing order
    sort(arr,arr+n);
    // count the number of triangle with possible given an array
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int k=j+1;
            while(k<n && arr[k]<arr[i]+arr[j])
            {
                k++;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int numberofTriangle = findNumberOfTriangles(arr, n);
    //print all the elements after completing an operation
    cout<<numberofTriangle;
    }