#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    map<int, multiset<string>, greater<int>> m; //multliset used for case --> same name, same marks
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int marks;
        cin>>marks;
        m[marks].insert(s);
    }
    for(auto i : m)
    {
        for(auto name : i.second)// since i.second is a multiset and we need to iterate through it
        {
            cout<<name<<" "<<i.first<<"\n";
        }
    }
}