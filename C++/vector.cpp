//use g++ xyz.cpp -std=c++11
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data={1,2,3};
    data.push_back(4);//adds 4 to the vector at index 3
    std::cout<<data[data.size()-1]<<std::endl;
    data.pop_back();//removes last index from the vector
   // std::cout<<data.size();
/*
    if (data[0]>data[1]);
    {
        for (auto i= data.begin();i != data.end();++i)
        {
            std::cout<< *i<<"\t";
        }
    }
*/
    std::swap(data[2],data[1]);
    {
        for (int i=0;i <3;i++)
        {
            std::cout<< data[i]<<"\t";
        }
    }

}