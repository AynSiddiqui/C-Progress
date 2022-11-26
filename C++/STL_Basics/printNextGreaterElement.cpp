#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, given_element;
    cin>>n>>given_element;
    stack<int> st;
    for(int i=n-1; i>=0; i++)
    {
        if(v[i]==given_element)
        {
            break;
        }
        st.push(v[i]);
    }

    bool f = true;
    while(!st.empty())
    {
        if(st.top()>given_element)
    }
}