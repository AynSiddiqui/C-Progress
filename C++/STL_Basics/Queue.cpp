#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    cout<<q.front()<<endl;
    q.push(20);
    cout<<q.front()<<endl;
    //q.pop();
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
}