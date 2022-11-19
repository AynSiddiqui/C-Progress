#include <iostream>

void dosomething(const int array[])//has to be of type const as it is being called in a connst variable
{

}

void print_a(const int data[], int size)//we can only call const variables otherwise error
{
    for(int i =0; i<size;i++)
    {
        std::cout<<data[i]<<"\t";
    }
    std::cout<<"\n";
    dosomething(data);
}

int main()
{
    int data[]= {1,2,3};
    print_a(data,3);
    std::cout<< data[0];
}