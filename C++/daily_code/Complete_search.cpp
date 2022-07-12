#include<bits/stdc++.h>
using namespace std;

void powerset(vector <int> v)
{
    int bits=v.size();
    int poset_size= pow(2,bits);
    for (int i=0;i<poset_size;i++) 
    {
        cout<<"\n";
        for(int j=0;j<bits;j++)
        {
            if(i&(1<<j))
            {
                cout<<v[j]<<"\t";
            }
        }
    }
}
int main()
{
    vector<int> v={1,2,3};

    powerset(v);


    return 0;

}