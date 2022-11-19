#include <iostream>
#include <string>

int main()
{
    std::string sent= "Hello my name is Ayaan";
    for( int i=0; i < sent.size(); i++)
    {
        if(sent[i] == 'o')
        {
            continue; //break stops at o while continue removes o and outputs the rest
        }
       std::cout<< sent[i]<< std::endl; // [i] is index of the letters in the word or sentence
    }
    std::cout<< "Done!";
}