#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter rows\n";
    cin>>row;
    cout<<"Enter column\n";
    cin>>col;
    for (int  i = 1; i <=row; i++)
    {
        for (int j = 0; j <=col; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    

}