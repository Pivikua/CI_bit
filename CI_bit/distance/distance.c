#include "distance.h"

// TODO: Create a static helper function called 'square'
// that takes an integer and returns its square
// The 'static' keyword makes it only visible within this file
static int square(int x) {
    return x * x;
}

// TODO: Implement the distance_squared function
// Use the static square helper to calculate (x2-x1)² + (y2-y1)²
int distance_squared(int x1, int y1, int x2, int y2) {
    return square(x2 - x1) + square(y2 - y1);
}