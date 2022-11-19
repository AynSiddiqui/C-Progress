#ifndef USERH
#define USERH
#include <iostream>

class User
{
    static int user_count;
    std::string status;
    
    public:
        static int get_user_count();
        std::string firstname;
        std::string lastname;    
        std::string get_status();
        void set_status(std::string _status);
        User();
        virtual void output();// we add void to overwrite in subclasses so it can be specific
        User(std::string fname, std::string lname,std::string str);
        ~User();
        friend std::ostream& operator<<(std::ostream& output,const User user);
        friend std::istream& operator >> (std::istream &input, User &user);
};
#endif