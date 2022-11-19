#include <iostream>
#include <string>

template <typename T>

void swap(T &a,T &b)//we need to add & in order to modify the variables
//if we do not add & the second cout will not be swapped
{
    T temp=a;
    a=b;
    b=temp;
    //std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
}

template <typename T>
void swap(T a[], T b[],int size)
{
    for(int i=0;i<size;i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

/*
void swap(std::string a,std::string b)
{
    std::string temp=a;
    a=b;
    b=temp;
}
*/

int main()
{
    int a; 
    int b;
    a=10;
    b=20;
    swap(a,b);
    std::cout<< "a:" << a <<"\t"<< "b:" << b <<"\n";
    
    std::string name = "Ayaan";
    std::string surname= "Siddiqui";
    swap(name,surname);
    std::cout<< name<<" "<<surname<<std::endl;

    const int SIZE=6;
    int nines[]= {9,9,9,9,9,9};
    int ones[]= {1,1,1,1,1,1};

    for(int i=0;i<SIZE;i++)
    {
        std::cout<<nines[i]<<" "<<ones[i]<<"\t";
    }
    std::cout<<"\n";

    swap(ones,nines, SIZE);

    for(int i=0;i<SIZE;i++)
    {
        std::cout<<nines[i]<<" "<<ones[i]<<"\t";
    }
    std::cout<<"\n";
}