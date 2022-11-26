#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    priority_queue<int> pq; //max priority heap gives descending --> default
    pq.push(2);
    pq.push(5);
    pq.push(4);
    pq.push(7);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}