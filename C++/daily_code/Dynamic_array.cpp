#include <bits/stdc++.h>
using namespace std;

int main()
{

//     // Vectors
//     vector<int> v;
//     v.push_back(2); // insert at end
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(8);
//     v.push_back(6);

//     // Printing vector

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i];
//     }
//     // shorter way to print vector
//     for (auto x : v)
//     {
//         cout << x << "\t";
//     }
//     v.pop_back(); // delete from end

//     vector<int> v1 = {1, 4, 7, -5, 4};
//     cout << "\n";
//     for (auto x : v1)
//     {
//         cout << x << "\t";
//     }
//     vector<int> v2(10);    // size 10, initial val 0
//     vector<int> v3(10, 5); // size 10, initial val 5
//     for (auto x : v2)
//     {
//         cout << x << "\t";
//     }
//     cout<<"\n\n\n\n";
//     sort(v1.begin(),v1.end());
//     for (auto x : v1)
//     {
//         cout << x << "\t";
//     }
//     cout<<"this is reverse";
//     // reverse(v1.begin(),v.end());
//     for(auto x:v1)  cout<<x<<"\t";
//     cout<<"\n\n\n\n";
//     //strings

//     string s1="prerna";
//     string s2= s1+s2;
//     s2[5]='s';
//     cout<<s2;
//     string s3=s2.substr(4,1);// substr(start_index,length )
//     cout<<s3;

//     //sets
//     set<int> st1;
//     st1.insert(2);
//     st1.insert(3);
//     st1.insert(4);
//     st1.insert(6);

//     for(auto x:st1)
//     {
//         cout<<x;
//     }
//     st1.erase(4);
//     st1.insert(7);
//     st1.insert(7);
//     for(auto x:st1)
//     {
//         cout<<x;
//     }
//     cout<<st1.count(7);

//     // multi sets
//     multiset<int> m1;
//     m1.insert(5);
//     m1.insert(5);
//     m1.insert(5);
//     m1.insert(5);
//     m1.insert(5);
//     m1.insert(5);

//     cout<<"\n"<<m1.count(5);
//     m1.erase(m1.find(5));
//     cout<<m1.count(5);
//     m1.erase(5);
//     cout<<"\n"<<m1.count(5)<<"\n";


//     //map
//     map<string,int> mp;
//     mp["a"]=1;
//     mp["b"]=3;
//     mp["ghjg"]=8;
    
//     for(auto x:mp)
//     {
//         cout<<x.first<<"\t"<<x.second<<"\n";
//     }

    // if(mp["a"])
    // cout<<"yo";
    // else cout<<"no";


    vector<int> s={2,6,3,7,300,03,82};
    auto it = s.end(); it--;
    cout << *it << "\n";

    
    return 0;
}
