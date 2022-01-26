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
            if(j<=i)
            {
              if((i+j)%2!=0) 
              cout <<0;
              else cout<<1;
            }
            
            else cout<<" ";
            
        }
        cout<<"\n";
    }
}