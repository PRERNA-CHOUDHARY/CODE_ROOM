#include<bits/stdc++.h>
using namespace std;
// first way
void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);
    cout<<n<<"\n";
}
// second way
void fun(int i,int n)
{
    if(i>n)
    return;
    cout<<i<<"\n";
    fun(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    fun(1,n);
}