#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"Enter rows\n";
    cin>>row;
    int count=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=i)
           { 
               cout<<count;
                count++;
           }
            else cout<<" ";
            

        }
        cout<<"\n";
    }
}