#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(unordered_set<int> s)
{
    for(int num:s)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    unordered_set<int> s;
    unordered_set<string> s1;
    //unordered_set<set<int>> s2; //cannot be made // cannot make complex for unordered sets (can be done for ordered)

    s.insert(12);
    s.insert(11);
    s.insert(13);
    s.insert(15);

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;

    //value based

    print(s);
    s.erase(15);
    print(s);

}