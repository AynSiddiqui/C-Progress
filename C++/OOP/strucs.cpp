#include <iostream>
//BY DEFAULT STRUCS ARE PUBLIC

struct User
{
    std::string firstname;
    std::string lastname;
    
    std::string get_status()
    {
        return status;
    }
    
    private:
        std::string status= "Gold";
};

int main()
{
    User A;// in place of A you can put any user
    A.firstname= "Ayaan";
    A.lastname= "Siddiqui";

    std::cout<< "User A is : "<< A.get_status()<<std::endl;
}