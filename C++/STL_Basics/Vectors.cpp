#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<int> v = {2,3,5,6};
    // for(int i=0; i<4; i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    /*
    vector <int> :: iterator it = v.begin();
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<endl;
    }
    */
    for(int value : v) //remains same
    {
        value++;
    }

    for(int value : v) //display
    {
        cout<<value;
    }
    cout<<endl;
    for(int &value : v) //increments by 1
    {
        value++;
    }
    auto it = v.begin(); 
    // above can be used instead of :
    // vector <int> :: iterator it = v.begin();
    for(auto value : v)  //display 
    {
        cout<<value;
    }
    return 0;

}