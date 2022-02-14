#include<bits/stdc++.h>
using namespace std;
bool isEven(long int n)
{
    if(n%2==0)
        return true;
    else
        return false;

}
int main()
{
    long int n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<'\t';
        if(isEven(n))
           n/=2;
        else
         n= n*3 +1;
    }
    cout<<n;
}