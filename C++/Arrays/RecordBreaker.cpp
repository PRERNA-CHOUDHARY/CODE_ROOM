#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,ans=0;
     cin>>n;
     if(n==1)
     {
         cout<<1;
         return 0;
     }
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     int mx=-1;
     for(int i=0;i<n-1;i++)
     {
         if(a[i]>mx && a[i]>a[i+1])
            ans++;
            mx=max(mx,a[i]);
     }
     if(a[n-1]>mx)
     ans++;
     cout<<ans;
    }

    return 0;
}