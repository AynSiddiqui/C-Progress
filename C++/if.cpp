#include <iostream>
#include <string>

int main()
{
    int age;
    std::cout<< "What is your age?";
    std::cin>> age;
    if( age<13)
    {
        std::cout<< "You are too young";
    }
    else if(age<19)
    {
        std::cout<< "You are getting there";
    }
    else{
    std::cout<< "Hey you made it!";
    }
}