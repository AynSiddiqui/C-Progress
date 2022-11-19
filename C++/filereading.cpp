#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("Hello.txt");
    /*
    std::vector<std::string> names;
    std::string input;// if we use char it will get each character and since we use string it gets each word
    while(file >> input)
    {
        names.push_back(input);
    }
    for(std::string name : names)
    {
        std::cout<< name<< std::endl;
    }
    */
    //second code

    std::string line;
    getline(file, line);
    std::cout<<line<<"\n";

}