#include <iostream>
#include <vector>

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

double add_if_not_exist(std::vector<User> &users, User user)
{
    for(int i=0;i<users.size();i++)
    {
        if(users[i].firstname==user.firstname &&
           users[i].lastname==user.lastname)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size();
};

int main()
{
    std::vector<User> users;
    User user1,user2,user3;

    user1.firstname="Ayaan";
    user1.lastname="Siddiqui";

    user2.firstname="A";
    user2.lastname="A";

    user3.firstname="B";
    user3.lastname="B";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;

    std::cout<< "Add your firstname : ";
    std::cin>>user.firstname;
    std::cout<< "\nAdd your lastname : "; 
    std::cin>>user.lastname;
    std::cout<<add_if_not_exist(users,user);
    std::cout<<"\n"<<users.size();
}