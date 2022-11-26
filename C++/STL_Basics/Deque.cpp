#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    //deque --> double ended queue
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.push_back(50);
    cout<<dq.front()<<endl;
    dq.pop_front();
    cout<<dq.front()<<endl;

    for(auto x : dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    deque<int> dq1 = {1,2,3,4,5};
    cout<<dq1[1]<<endl;
}


