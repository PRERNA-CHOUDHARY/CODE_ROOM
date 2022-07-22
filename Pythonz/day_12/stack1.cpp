#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(21);
    s.push(43);
    s.push(45);
    s.pop();
    int x=0;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}