#include <iostream>
#include "School.h"
#include "Teacher.h"
#include "Student.h"

int main()
{
    Teacher person(59, "Alex");
    person.output();
    std::cout << "person ID: " << person.getId() << std::endl;
    std::cout << "person Age: " << person.getAge() << std::endl;
    std::cout << "person Name: " << person.getName() << std::endl;
    Student stu(18, "Stu");
    std::cout << "People count: " << School::getPeopleCount() << std::endl;
    person.~Teacher();
    std::cout << "People count after deconstructor: " << School::getPeopleCount() << std::endl;
    std::cout << "Stu ID: " << stu.getId() << std::endl;
    return 0;
}
