//function definitions
#include "mathutils.h"

// overloading
// knows how to call it using the parameters differences
double area(double length, double width) // rectangle
{
    return length * width;
}

double area(double length) // square
{
    return length * length;
}

double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

// = in header makes it a default 2 if nothing is passed in
// default values in declarations (header file)
double pow(double base, int pow)
{
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}
