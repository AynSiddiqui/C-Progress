#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

double power(double bas , double exp)
{
  double result = 1;
  for( int i=0;i < exp ;  i++);
  {
      result *= bas ;// which is result= result*base
  }
  return result;
}

void print_p(double bas, double exp)
{
    double power = pow (bas, exp);
    cout<< bas << " raised to the power of "<< exp<< " is "<< power<< endl;
}

int main()
{
    int x, y;
    cout<< "Welcome to Powers.\n";
    cout << "What is your base? ";
    cin >> x;
    cout<< "What is your power? ";
    cin>> y;
    print_p(x, y);
    cout<< "Did you understand smartass?\n";
}
