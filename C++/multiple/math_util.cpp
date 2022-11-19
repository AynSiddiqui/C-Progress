//DEFINITION
#include "math_util.h"

struct Rectangle;

namespace utilz
{
    double area(double length, double width)//we cant default double width to length however
    {
        return length*width;
    }

    double area(double length)//square
    {
        return length*length;
    }

    double area(Rectangle rect)
    {
        return rect.length*rect.width;
    }

    double pow(double base, int exp)//WE NEED TO ADD DEFAULT ARG IN DECLARATION NOT HERE
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

}

