#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE INCOMPLETE!!!!!!!!!!!!

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first == p2.first)
    {
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.rbegin(), v.rend(), cmp);

    for(auto i : v)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }

}