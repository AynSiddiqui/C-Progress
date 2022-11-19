#include <iostream>
#include <string>
#include <cmath>
int main()
{
    int fact;
    std::cout<< "Which factorial? ";
    std::cin>> fact;
    int factorial= fact;
    for(int i = fact - 1; i>0 ;i--)
    {
        fact *= i ; //fact*= i is same as fact= fact * i
    }
    std::cout<< "Factorial of "<< factorial<< " is "<< fact<< std::endl;
}