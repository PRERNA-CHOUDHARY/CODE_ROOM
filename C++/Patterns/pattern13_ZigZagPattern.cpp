#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col;
    cout<<"Enter col\n";
    cin>>col;
    for (int i = 1; i <=3; i++)
    {
        for(int j=1;j<=col;j++)
        if((i+j)%4==0 || (i==2 && j%4==0) )
        cout<<"* ";
        else cout<<"  ";
        cout<<"\n";
    }
}