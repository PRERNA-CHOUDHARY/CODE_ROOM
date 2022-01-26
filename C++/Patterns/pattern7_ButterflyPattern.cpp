#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int row,col;
//     cout<<"Enter rows\n";
//     cin>>row;
//     for(int i=1;i<=row;i++)
//     {
//         for(int j=1;j<=row;j++)
//         {
//             if(j<=i)
//             cout<<"*";
//             else cout<<" ";

//         }
        
//         for(int j=1;j<=row;j++)
//         {
//             if(i+j-1>=row)
//             cout<<"*";
//             else cout<<" ";

//         }
//         cout<<"\n";
//     }
//     for(int i=1;i<=row;i++)
//     {
        
//         for(int j=1;j<=row;j++)
//         {
//             if(i+j-1<=row)
//             cout<<"*";
//             else cout<<" ";

//         }
//         for(int j=1;j<=row;j++)
//         {
//             if(j>=i)
//             cout<<"*";
//             else cout<<" ";

//         }
//         cout<<"\n";
//     }
// }

int main()
{
    int row;
    cout<<"Enter rows\n";
    cin>>row;
    for(int i=1;i<=row;i++)// space= 2*row-2*i
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        int space=2*row-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--)// space= 2*row-2*i
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        int space=2*row-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}