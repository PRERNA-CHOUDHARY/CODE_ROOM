#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int t1=0,t2=1,nextTerm;
    for(int i=0;i<=n;i++)
    {
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}