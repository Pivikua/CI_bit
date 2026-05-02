#include <stdio.h>
#include "math_ops.h"

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    // TODO: Call the multiply function with a and b, store the result
    int product = multiply(a, b);
    // TODO: Call the subtract function with a and b, store the result
    int difference = subtract(a, b);

    // TODO: Print the results in the format:
    // Product: {result of multiply}
    printf("Product: %d\n", product);

    // Difference: {result of subtract}
    printf("Difference: %d\n", difference);
    
    return 0;
}