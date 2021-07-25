#ifndef TEACHER_H
#define TEACHER_H
#include "school.h"


class Teacher : public School
{
    public:
        Teacher(int a, std::string n);
        ~Teacher();
        int getAge();
        std::string getName();
        void setAge(int a);
        void output();
    protected:
        int age;
        std::string name;
    private:
};

#endif // TEACHER_H
