#include<bits/stdc++.h>
using namespace std;

int kthLargest(int Arr[],int N,int K)
{
    int sum;
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        sum=0;
        for(int j=i;j<N;j++)
        {
            sum+=Arr[j];
            v.push_back(sum);
        }
    }
    auto last = unique(v.begin(),v.end());
    distance(last,v.end());
    sort(v.begin(),v.end());
    int val = v[v.size()-K];
    return val;
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
    int kthLargestSum = kthLargest(arr, n,k);
    cout<<kthLargestSum;
}