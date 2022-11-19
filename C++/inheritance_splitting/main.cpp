#include <iostream>
#include <vector>
#include "user.h"
#include "teacher.h"
#include "student.h"
//FRIEND METHOD OR FUNC

void do_smthg(User &user)// we need & to passby ref so we can be more specific(polymorphism)
{
    user.output();
}
int main()
{
    /*
    User user;
    std::cin>>user;
    std::cout<<user;
    */

    Teacher teacher;
    Student student;
    teacher.output();
    student.output();
    User &u= teacher;
    //u.output();
    //do_smthg(u);
    Teacher();
    Student();
    User::get_user_count();
}