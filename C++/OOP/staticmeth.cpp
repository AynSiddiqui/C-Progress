#include <iostream>
#include <vector>

class User
{
    static int user_count;//Static is used for a general Class in order to get data about all classes 
                          // in a general way for example user count
    std::string status= "Gold";
    
    public:
        static int get_user_count()
        {
            return user_count;
        }
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
        User()
        {
            //std::cout<<"Constructor begins\n";
            user_count++;
        }
        User(std::string fname, std::string lname,std::string str)
        {
            this->firstname= fname;
            this->lastname= lname;
            this->status = str;
            //std::cout<< "Constructor begins\n";
            user_count++;
        }
        ~User()
        {
            //std::cout<<"\nDestructor works";
            user_count--;
        }
};

int User::user_count = 0;

double add_if_not_exist(std::vector<User> &users, User &user)
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
    User user,user1,user2,user3,user4;
    std::cout<<User::get_user_count()<<"\n";
    user1.~User();
    std::cout<<User::get_user_count();
}