#include <iostream>

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)//we cant default double width to length however
{
    return length*width;
}

double area(double length)
{
    return length*length;
}

double area(Rectangle rect)
{
    return rect.length*rect.width;
}

double pow(double base, int exp = 2)//either we add a default arg to power or we overload(use another code)
{
    int total=1;
    for(int i=0;i<exp;i++)
    {
        total*=base;
    }
    return total;
}

/*
double pow(double base)
{
    return base*base;
}
*/

int main()
{
    std::cout<<pow(2,3)<<std::endl;
    std::cout<<pow(6)<<std::endl;
    /*
    Rectangle rect;
    rect.length = 10;
    rect.width = 20; 
    std::cout<<area(rect.length,rect.width)<<std::endl;
    std::cout<<area(rect.length)<<std::endl;//only length assuming its a square call
    std::cout<<area(rect)<<std::endl;
    */
}