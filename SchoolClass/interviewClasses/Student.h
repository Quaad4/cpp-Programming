#ifndef STUDENT_H
#define STUDENT_H
#include "Teacher.h"

class Student : public Teacher
{
    public:
        Student(int a, std::string n);
        ~Student();
        void output();
    protected:

    private:
};

#endif // STUDENT_H
