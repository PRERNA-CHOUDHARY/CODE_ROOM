#include<bits/stdc++.h>
using namespace std;
int bulbs(vector<int> v)
{
    int cost =0;

    for(auto x: v)
    {
        (cost%2==0)?x=x:x=!x;
        x%2!=0?cost=cost:cost++;

    }
    return cost;
}
int main()
{
    vector <int> v={0,1,0,1,1,1,0,0,1,0,1,0};
    int result=bulbs(v);
    
    cout<<result;
     
     return 0;
}