#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter rows\n";
    cin >> row;
    int val = row;
    for (int i = 1; i <2 * row; i++)
    {
        int k = row;
        if (i <= row)
            for (int j = 1; j < 2 * row; j++)
            {
                cout<<k;
                if(i>j)
                k--;
                if(i+j>=2*row)
                k++;
            }
        if(i>row)
        {
            for (int j = 1; j < 2 * row; j++)
            {
                cout<<k;
                if(i+j<2*row)
                k--;
                else if(j>=i)
                k++;
            }
        }
        cout << "\n";
    }
}
