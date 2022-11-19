#include <iostream>
#include <vector>

void print_v(std::vector<int> &data)
{
    data.push_back(23);
    for(int i=0; i<data.size();i++)
    {
        std::cout<< data[i]<< "\t";
    }
    std::cout<<"\n";
}
/*void print_v(std::vector<int> data)
{
    for(int i=0; i<data.size();i++)
    {
        std::cout<< data[i]<< "\t";
    }
}
*/

int main()
{
    std::vector<int> data={1,2,3};
    print_v(data);
    print_v(data);
    print_v(data);
    print_v(data);
}