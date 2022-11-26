#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector <int> arr(10);
    //iota assigns value from -5 in an increasing order towards the end
    iota(arr.begin(), arr.end(), -5); //includes values from -5 to 4

    sort(arr.rbegin(),arr.rend()); //reverses due to r

    for(auto i: arr)
        cout<<i<<" ";
    cout<<endl;

    cout<< arr.front() <<endl;
    cout<<endl;

    arr.insert(arr.begin()+5,10);
    cout<< arr[5]<<endl;
    cout<< arr[6]<<endl;
    cout<< arr[7]<<endl;
    cout<<endl;

    for(auto i: arr)
        cout<<i<<" ";
    cout<<endl;

    arr.insert(arr.begin()+1,3,10);

    for(auto i: arr)
        cout<<i<<" ";
    cout<<endl;
    cout<<endl;

    cout<<arr.front()<<endl;
    
}