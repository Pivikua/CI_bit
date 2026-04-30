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

/*
#include "distance.h"

int main() {
    int x1, y1, x2, y2;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    // TODO: Call distance_squared with the input coordinates
    // and print the result in the format: "Squared distance: {result}"
    int result = distance_squared(x1, y1, x2, y2);
    printf("Squared distance: %d\n", result);
    
    return 0;
}*/

/*
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
}*/

/*#include "greet.h"

// Заголовочные файлы

int main() {
    char name[100];
    scanf("%s", name);
    
    // TODO: Call the greet function with the name
    greet(name);
    
    return 0;
}

// TODO: Implement the greet function that prints "Hello, <name>!"

void greet(const char* name) {
    printf("Hello, %s!\n", name);
}*/