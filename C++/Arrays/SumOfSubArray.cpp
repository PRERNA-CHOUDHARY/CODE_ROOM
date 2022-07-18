// Number of subarray of an array with n element = nC2 + n= n*(n+1)/2
// subarray is continious..
// subsequence is not continious but maintains the order..
// Number of subsequences =2^n..
//every subarray is subsequence...
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,curr=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            cout<<curr<<"\n";
        }
      
    }

    return 0;
}