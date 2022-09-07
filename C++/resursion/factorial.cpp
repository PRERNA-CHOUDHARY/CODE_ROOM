#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==1)
    return 1;
    int sum=n*fun(n-1);
    return sum;

    
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
    
}