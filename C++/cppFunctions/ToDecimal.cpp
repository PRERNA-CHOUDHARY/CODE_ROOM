#include<bits/stdc++.h>
using namespace std;
int ToDecimal(int n,int b)
{
    int ans=0;
    int x=1;
    while(n)
    {
        int y=n%10;
        ans+=x*y;
        x*=b;
        n/=10;
    }
    return ans;
}
int main()
{
    int n,b;
    cout<<"Enter number and base: ";
    cin>>n>>b;
    cout<<ToDecimal(n,b)<<endl;
    
}