#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<string> v = {"naman", "abc", "xyz", "abc", "stu","stu"};
    map<string, int> m;
    for(auto word: v)
    {
        m[word]++;//will increase the number associated with the word if repeated
    }
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }
}