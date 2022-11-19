#include <iostream>
#include <cmath>

int main()
{
    long double num,ans,i;
    std::cin>>num;
    i=0;
    for(i=0;abs(i*i<=num);i+=0.000001)
    {
        i+=0.0000001;
        //i+=0.000001;
    }
    std::cin.clear();
    std::cout<<i;
    if(i-floor(i)<0.000001)
        {
            std::cout<<"\nWhole number root";
        }
    else{
            std::cout<<"\nDecimal roots";
        }
    //std::cout<<i;
}
    /*
    float num,ans,i;
    std::cin>>num;
    i=0;
    while(i*i<=num)
    {} 
    if(i*i==num)
    {
     return i;
    }
    i++;
    while(i*i<=num)
    {
    i=i+0.0001;
    }
    std::cout<<i;
    }
    std::cout<<i;
    */