#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    //map<key datatype, value datatype> nameofmap;

    map<int, string> m;
    m[1] = "chalo lets learn map";
    m[2] = "dummy string";
    m[3] = "stringggggg";

    //m.insert({1, "coc workshop"});

    map<int, string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto temp = m.find(1); // datatype of temp --> iterator
    cout<<temp->second<<endl;
    m.erase(temp);
    
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}