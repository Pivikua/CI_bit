#include <stdio.h>
#include "calc.h"

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    // TODO: Calculate the sum of a and b using the add function
    int sum = add(a, b);
    
    // TODO: Calculate the difference of a minus c using the subtract function
    int difference = subtract(a, c);
    
    // TODO: Calculate the product of b and c using the multiply function
    int product = multiply(b, c);
    
    // TODO: Print the results in the required format:
    // Sum: {result}
    // Difference: {result}
    // Product: {result}
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}