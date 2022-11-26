#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(set<int> s)
{
    for(int num:s)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s; //stores number in order always
    set<string> s1;
    set<set<int>> s2; //can be made

    s.insert(12);
    s.insert(11);
    s.insert(13);

    // iterators

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;


    //range based

    for(auto num :s)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    print(s);
    s.erase(11);
    print(s);

    auto it = s.find(13);

    //cout<< *it <<endl; //garbage value when no. not found so not recommended method to find

    if(it == s.end()) //recommended method to find
    {
        cout<< "Number is not present\n";
    }
    else
    {
        cout<< "Number found"<<endl;
    }
}