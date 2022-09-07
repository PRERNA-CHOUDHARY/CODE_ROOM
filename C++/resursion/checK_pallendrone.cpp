#include<bits/stdc++.h>
using namespace std;

bool fun(string stri,int i,int n)
{
    if(i>=n/2)
    return true;
    if(stri[i]!=stri[n-i-1])
    return false;
    
    return fun(stri,i+1,n);

}
int main()
{
    int n;
    string stri;
    cin>>stri;
    n=stri.length();
    
    int y=fun(stri,0,n);
    if(y)
    cout<<"YES";
    else cout<<"NO";
    
}