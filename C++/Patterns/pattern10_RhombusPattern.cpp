#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"Enter rows\n";
    cin>>row;
    for (int i = 1; i <=row; i++)
    {
        for(int j=1;j<=row-i;j++)
        cout<<" ";
        for(int j=1;j<=row;j++)
        cout<<"*";
        cout<<"\n";
    }
    
}