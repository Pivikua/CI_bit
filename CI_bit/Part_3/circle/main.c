#include <stdio.h>
#include "circle.h"

int main() {
    double radius;
    scanf("%lf", &radius);
    
    // TODO: Create a Circle struct with the given radius
    Circle circle;
    circle.radius = radius;

    // TODO: Use circle_area and circle_circumference helper methods
    // to calculate and print the results
    double area = circle_area(&circle);
    double circumference = circle_circumference(&circle);
    
    // Print format:
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}
