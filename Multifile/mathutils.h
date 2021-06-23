//directive so it's not used twice in files
// if not defined
#ifndef MATHUTILS
// defining it
#define MATHUTILS

//struct can be defined in the header file
struct Rectangle
{
    double length;
    double width;
};

// overloading
// knows how to call it using the parameters differences
double area(double length, double width); // rectangle

double area(double length); // square

double area(Rectangle rectangle);

// = makes it a default if nothing is passed in
double pow(double base, int pow = 2);

#endif // MATHUTILS
