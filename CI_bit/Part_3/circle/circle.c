#include "circle.h"

// Use 3.14159 as the value of pi
const double PI = 3.14159;

// TODO: Implement circle_area
// Formula: pi * radius * radius
// Remember: only read the radius, don't modify it
double circle_area(const Circle *self){
    return PI * self->radius * self->radius;
}

// TODO: Implement circle_circumference
// Formula: 2 * pi * radius
// Remember: only read the radius, don't modify it
double circle_circumference(const Circle *self){
    return 2 * PI * self->radius;
}