#include<bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
    int start=0,end=0;
    int sum=0;
    int min_length=n+1;
    while(end<n)
    {
        while(end<n && sum<=x)
        {
            sum+=arr[end++];
        }
        while(sum>x && start<n)
        {
            if(end-start<min_length)
            {
                min_length = end-start;
            }
            sum-=arr[start++];
        }
    }
    return min_length;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int smallestSubSum = smallestSubWithSum(arr, n,k);
    cout<<smallestSubSum;
}