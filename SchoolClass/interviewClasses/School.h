#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>


class School
{
    public:
        School();
        ~School();
        static int getPeopleCount();
        virtual void output();
        int getId()
        {
            return id;
        }
    protected:
        int id;
    private:
        static int peopleCount;
};

#endif // SCHOOL_H
