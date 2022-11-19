#include <iostream>
#include <vector>
//FRIEND METHOD OR FUNC

class User
{
    static int user_count;
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
        friend void output_status(User user);//we have to put in User user as a parameter
};

int User::user_count = 0;

void output_status(User user)
{
    std::cout<<user.status;
}

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

std::ostream& operator<<(std::ostream&output, const User user)
{
    std::cout<<"First name : "<< user.firstname<<
    "\nLast name : "<< user.lastname<<std::endl;
    //return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    std::cin>>user.firstname>>user.lastname;
    //return input;
}

int main()
{
    User user;
    output_status(user);
}