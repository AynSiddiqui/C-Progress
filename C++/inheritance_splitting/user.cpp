#include <iostream>
#include "user.h"
#include <vector>

        int User::get_user_count()
        {
            std::cout<<user_count;
        };    
        std::string User::get_status()
        {
            return status;
        }
        void User::set_status(std::string _status)//setter
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
        User::User()
        {
            std::cout<<"Constructor begins, User created.\n";
            user_count++;
        }
        void User::output()
        {
            std::cout<<"I am a user.\n";
        }
        User::User(std::string fname, std::string lname,std::string str)
        {
            this->firstname= fname;
            this->lastname= lname;
            this->status = str;
            //std::cout<< "Constructor begins, User created\n";
            user_count++;
        }
        User::~User()
        {
            //std::cout<<"\nDestructor works";
            user_count--;
        }
        std::ostream& operator<<(std::ostream& output,const User user);
        std::istream& operator >> (std::istream &input, User &user);

int User::user_count = 0;

std::ostream& operator<<(std::ostream&output,const User user)
{
    if(user.status=="Gold"||user.status=="Silver"||user.status=="Bronze")
    {
    std::cout<<"First name : "<< user.firstname<<
    "\nLast name : "<< user.lastname<<
    "\nUser Status : "<< user.status<<std::endl;
    //return output;
    } 
    else{
        std::cout<<"Error : status not valid";
        }
}

std::istream& operator >> (std::istream &input, User &user)
{
    std::cin>>user.firstname>>user.lastname>>user.status;
    //return input;
}
