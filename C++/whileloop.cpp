#include <iostream>
#include <string>

int main()
{
    int fact;
    std::cout<< "Factorial of? ";
    std::cin>> fact;
    int i= fact-1;
    while (i>0)
    {
        fact*= i;
        i--;
    }
    std::cout<< fact;
}