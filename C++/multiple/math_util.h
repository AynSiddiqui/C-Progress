//DECLARATION
// use g++ -c xyz1.cpp xyz2.cpp and it will create .o files to have a hidden source code
//then use g++ xyz1.o xyz2.o
#ifndef MATH_UTIL//ITLL PREVENT THE HEADER TO BE INCLUDED TWICE
#define MATH_UTIL

struct Rectangle
{
    double length;
    double width;
};

namespace utilz
{
    double area(double length, double width);

    double area(double length);

    double area(Rectangle rect);

    double pow(double base, int exp = 2);

/*
    double pow(double base)
*/
}

#endif