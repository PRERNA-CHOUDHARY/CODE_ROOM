#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"Enter rows\n";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        int count=i;
        for(int j=1;j<=row;j++)
        {
            if(j<=i)
            cout<<count;
            else cout<<" ";

        }
        cout<<"\n";
    }
}