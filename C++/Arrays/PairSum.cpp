#include<bits/stdc++.h>
using namespace std;
bool pairsum(int a[],int n,int k)
{   
    int low=0,high=n-1;
    while(low<high)
    {
        int sum=a[low]+a[high];
        if(sum==k)
        {cout<<low<<" "<<high;
        return true;}
       else if(sum>k)
        high--;
        else low++;

    }
    return false;
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<n;j++)
    //     {
    //         if(a[i]+a[j]==k)
    //         {
    //             cout<<i<<" "<<j;
    //         return true;
    //         }
    //     }
    // return false;
}

int main()
{
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;
    if(pairsum(a,8,k))
    cout<<"\ntrue";
    else cout<<"false";
}