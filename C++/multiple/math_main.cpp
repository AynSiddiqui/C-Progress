#include <iostream>
#include "math_util.h"

int main()
{
    std::cout<<utilz::pow(2,3)<<std::endl;
    std::cout<<utilz::pow(6)<<std::endl;

    Rectangle rect;
    rect.length = 10;
    rect.width = 20; 
    std::cout<<utilz::area(rect.length,rect.width)<<std::endl;
    std::cout<<utilz::area(rect.length)<<std::endl;//only length assuming its a square call
    std::cout<<utilz::area(rect)<<std::endl;
    
}