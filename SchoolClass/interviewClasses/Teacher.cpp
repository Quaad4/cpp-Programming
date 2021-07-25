#include "Teacher.h"

// member initialization
Teacher::Teacher(int a, std::string n)
: name(n)
{
    Teacher::setAge(a);
}

// encapsulation
void Teacher::setAge(int a)
{
    if(a < 12)
    {
        std::cout << "Person is too young" << std::endl;
    }
    else if(a > 80)
    {
        std::cout << "Person is too old" << std::endl;
    }
    else
    {
        age = a;
    }
}

int Teacher::getAge()
{
    return age;
}

std::string Teacher::getName()
{
    return name;
}

//polymorphism
void Teacher::output()
{
    std::cout << "I am a teacher at the school" << std::endl;
}

Teacher::~Teacher()
{
    //dtor
}
