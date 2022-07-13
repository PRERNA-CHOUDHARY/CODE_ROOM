#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
    int currsum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        currsum=0;
        maxsum=max(maxsum,currsum);
    }
    return maxsum;

}
int main()
{

    int n,totalsum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int wrapsum,nonwrapsum,maxsum;
    nonwrapsum=kadane(a,n);
    for(int i=0;i<n;i++)
     {  
          totalsum+=a[i];
          a[i]=-a[i];
    }
    wrapsum=totalsum+kadane(a,n);
    maxsum=max(wrapsum,nonwrapsum);
    cout<<maxsum;

}
