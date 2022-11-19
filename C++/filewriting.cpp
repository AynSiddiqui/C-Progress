#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    /*
    std::ofstream file;
    file.open("Hello.txt");                          
    */
   std::string filename;
   std::cin>>filename;

    std::ofstream file(filename, std::ios::app); // it will create a file whatever the filename is
                                                    //std::ios::app will keeo adding data to the text
    if(file.is_open())
    {
        std::cout<<"Done";
    }
    std::vector<std::string> names;
    names.push_back("A");
    names.push_back("B");
    names.push_back("C");
    for(std::string name: names)
    {
        file<<name<<std::endl;
    }

                                                    //file<<"Hello\n"<<std::endl;
    file.close();
}