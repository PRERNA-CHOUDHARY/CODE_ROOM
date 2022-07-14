#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++)   
         cin>>a[i];
    const int N = 1e5+2;
    int ind[N]= {-1};
    int minind=INT_MAX;
    for(int i=0;i<N;i++)
        ind[i]=-1;
    for(int i=0;i<n;i++)
    {
        if (ind[a[i]]!=-1)
         minind=min(minind,ind[a[i]]);
         else
            ind[a[i]]=i;
    }
    if(minind==INT_MAX)
    cout<<-1;
    else cout<<minind;
    return 0;

}

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     int mx=-1;
//     for(int i=0;i<n;i++)
//     {   
//          cin>>a[i];
//          mx=max(mx,a[i]);
//      }
//      int b[mx]={0};
//      for(int i=0;i<n;i++)
//      {
//          b[a[i]]++;
//          if(b[a[i]]==2)
//          {cout<<i;
//          break;
//      }
//      }
// }
