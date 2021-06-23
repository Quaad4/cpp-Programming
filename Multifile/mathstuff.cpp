#include <iostream>
#include "mathutils.h"

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 5;
    std::cout << area(rectangle.length, rectangle.width) << '\t';
    std::cout << area(rectangle.length) << '\t';
    std::cout << area(rectangle) << '\t';
    std::cout << pow(3, 3) << '\t';
    std::cout << pow(3) << '\t';

    return 0;
}

