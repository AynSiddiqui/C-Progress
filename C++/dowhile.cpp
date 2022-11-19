#include <iostream>
#include <string>

int main()
{
    std::string pass = "hello123";
    std::string guess;
    do
    {
        std::cout<< "What is the password? ";
        std::cin>> guess;
    } while(guess!=pass);
    if( guess == pass);
    {
        std::cout<< "Wow!! You got it absolutely right";
    }
}