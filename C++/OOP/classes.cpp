#include <iostream>
#include <vector>
//DEFAULTS CLASSES ARE PRIVATE
class User
{
    std::string status= "Gold";
    
    public:
        std::string firstname;
        std::string lastname;    
        std::string get_status()
        {
            return status;
        }
};

int main()
{
    User A;// in place of A you can put any user
    A.firstname= "Ayaan";
    A.lastname= "Siddiqui";
    std::vector<User> users;
    users.push_back(User());
    users.push_back(A);    
    
    std::cout<< "User A is : "<< A.get_status()<<std::endl;
    std::cout<<users[0].firstname<<std::endl;// if we put index 1 we get Ayaan
}