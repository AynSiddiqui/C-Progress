#include <iostream>

void swap(int &a,int &b)//we need to add & in order to modify the variables
//if we do not add & the second cout will not be swapped
{
    int temp=a;
    a=b;
    b=temp;
    std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
}

int main()
{
    int a, b;
    a=10;
    b=20;
    swap(a,b);
    std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
}