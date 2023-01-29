#include<bits/stdc++.h>
using namespace std;

void moveAllZeroesToend(int arr[], int n)
{
    int count=0;
	int j=0;
    //count all the zeroes present in the array
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==0)
	    {
	        count++;
	    }
	}
    // all nonzeroes element copy to temporary array
	int temp[n-count];
	for(int i=0;i<n;i++)
	{
	    if(arr[i]!=0)
	    {
	        temp[j++]=arr[i];
	    }
	}
    //arrange all the elements in the original array
	for(int i=0;i<n;i++)
	{
	    if(i< n-count)
	    {
	        arr[i]=temp[i];
	    }
	    else
	    {
	        arr[i]=0;
	    }
	}
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
    moveAllZeroesToend(arr, n);
    //print all the elements after completing an operation
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }