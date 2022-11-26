#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string a = "coc workshop";
    cout<<a<<endl;

    string s;
    //cin>>s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;

    string b = "workshop";
    b.push_back('s');
    cout<<b<<endl;

    string d = "Coc ";

    // d+= "Workshop" or d = d + "Workshop" //not a good practice //takes a lot of time
    d.append("Workshop");
    cout<<d<<endl;

    string e = "Ayaan";

    sort(e.begin(), e.end());
    cout<<e<<endl;

    reverse(e.begin(), e.end());
    cout<<e<<endl;

    string f = "Coc ";
    vector<char> g = {'C','O','C'};
    cout<<f<<endl;
    for(auto i: g)
        cout<<i<<" ";
    cout<<endl;


    
}