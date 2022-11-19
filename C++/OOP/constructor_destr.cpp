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
        /*User()            // since we specified args below we need to in order to create user
        {
            std::cout<<"Hello\n";
        }*/
        User(std::string fname, std::string lname,std::string str)
        {
            this->firstname= fname;
            this->lastname= lname;
            this->status = str;
            std::cout<< "Constructor begins\n";
        }
        ~User()
        {
            std::cout<<"\nDestructor works";
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
    User user("Ayaan", "Siddiqui","Gold");
    std::cout<<user.firstname;
}