#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    stack<int> st;
    st.push(100);
    cout<<st.top()<<endl;
    st.push(200);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<endl;
    
    stack<string> st1;
    st1.push("coc");
    st1.push("wokshop");
    cout<<st1.top()<<endl;

}
