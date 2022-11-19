#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
    double base, exp;
    cout << "Base?";
    cin >> base ;
    cout << "Power?";
    cin >> exp ;
    double power = pow(base,exp);
    cout<< power;

}