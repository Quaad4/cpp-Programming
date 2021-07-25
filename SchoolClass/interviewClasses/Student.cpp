#include "Student.h"

Student::Student(int a, std::string n)
: Teacher::Teacher(a, n)
{
    //ctor
}

void Student::output()
{
    std::cout << "I am a student" << std::endl;
}

Student::~Student()
{
    //dtor
}
