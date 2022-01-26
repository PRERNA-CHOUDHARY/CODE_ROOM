#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter rows\n";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i+j-1<=row)
            cout<<"*";
            else cout<<" ";

        }
        cout<<"\n";
    }
}