#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,pd,curr,len=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    pd=a[1]-a[0];
    curr=2;
    for(int i=2;i<n;i++)
    {
        
        if(pd==a[i]-a[i-1])
        curr++;
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        len=max(len,curr);
    }
    cout<<len;
    }
    return 0;
}