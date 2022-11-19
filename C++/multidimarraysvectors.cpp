//MULTI DIMENSIONAL ARRAYS
#include <iostream>
#include <vector>
int main()
{
/*
int array[][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
for(int r=0;r<3;r++)
{
    for(int c=0;c<4;c++)
    {
        std::cout<<array[r][c]<<"\t";
    }
    
}
*/
std::vector<std::vector<int>> v={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
for(int r=0;r<3;r++)
{
    for(int c=0;c<v.size();c++)
    {
        std::cout<<v[r][c]<<"\t";
    }
    std::cout<<std::endl;
    
}
std::cout<<v.capacity()<<"\n";
std::swap(v[1][1],v[1][2]);//swapping within multidim arrays
for(int r=0;r<3;r++)
{
    for(int c=0;c<v.size();c++)
    {
        std::cout<<v[r][c]<<"\t";
    }
    std::cout<<std::endl;
    
}
}