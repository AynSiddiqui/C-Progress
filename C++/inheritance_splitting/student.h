#ifndef STUDENTH
#define STUDENTH
#include "user.h"
#include <vector>
#include <iostream>
#include <string>

class Student : public User
{
    public:    
        std::vector<std::string> attend;        
        void output();
        Student();
};

#endif