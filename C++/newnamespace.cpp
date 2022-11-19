#include <iostream>

namespace utilz
{
    void print_a(int array[],int size)
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<array[i]<<"\t";
        }
        std::cout<<"\n";
    }
}

int main()
{
    int array[]= {1,2,3};
    utilz::print_a(array,3);
    std::cout<<array[0]<<"\n";
}