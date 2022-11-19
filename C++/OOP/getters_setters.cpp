#include <iostream>
#include <vector>

class User
{
    std::string status;
    
    public:
        std::string firstname;
        std::string lastname;    
        std::string get_status()
        {
            return status;
        }
        void set_status(std::string _status)//setter
        {
            if(_status=="Gold"||_status=="Silver"||_status=="Bronze")
            {
                this->status=_status;
            }
            else
            {
                this->status="Invalid";
            }
        }
        User(std::string fname, std::string lname,std::string str)
        {
            this->firstname= fname;
            this->lastname= lname;
            this->status = str;
            std::cout<< "Constructor begins\n\n";
        }
        ~User()
        {
            std::cout<<"\n\nDestructor works";
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
    std::cout<<user.firstname<<"\n";
    std::string x;
    std::cout<<"Set status : ";
    std::cin>>x;
    user.set_status(x);
    std::cout<<user.get_status();
}