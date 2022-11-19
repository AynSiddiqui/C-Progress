#ifndef TEACHERH
#define TEACHERH
#include "user.h"
#include <vector>
#include <iostream>
#include <string>

class Teacher : public User
{
    public:    
        std::vector<std::string> classes;        
        void output();
        Teacher();
};

#endif