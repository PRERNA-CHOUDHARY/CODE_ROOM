#include<bits/stdc++.h>
using namespace std;

int max_product(vector <int> v)
{
    sort(v.begin(),v.end());
    int high=v.size();
    int hi=v[high-1]*v[high-2]*v[high-3];
    int low=v[1]*v[0]*v[high-1];
    return max(hi,low); 

}

int main()
{
    vector <int> v={-10,-11,9,3,4,5,6,7,9};
    int  result=max_product(v);
    cout<<result;
    return 0;
}