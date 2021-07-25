#include "School.h"

School::School()
{
    id = peopleCount;
    peopleCount++;
}

School::~School()
{
    peopleCount--;
}

int School::getPeopleCount()
{
    return peopleCount;
}

void School::output()
{
    std::cout << "I go to Polesworth School" << std::endl;
}

int School::peopleCount = 0;
