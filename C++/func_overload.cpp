/*FUNCTION OVERLOADING MEANS HAVING SAME FUNCTION NAME BUT FOR DIFFERENT TYPES 
HENCE 2 DIFF FUNCTIOMS FOR SAME FUNCTION CALL*/
#include <iostream>
#include <string>

void swap(int &a,int &b)//we need to add & in order to modify the variables
//if we do not add & the second cout will not be swapped
{
    int temp=a;
    a=b;
    b=temp;
    std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
}

void swap(std::string a,std::string b)
{
    std::string temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a; 
    int b;
    a=10;
    b=20;
    swap(a,b);
    std::string name = "Ayaan";
    std::string surname= "Siddiqui";
    std::cout<< name<<" "<<surname<<std::endl;
    std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
}