#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n<1)
    return 0;
    int sum=n+fun(n-1);
    return sum;

    
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    
}