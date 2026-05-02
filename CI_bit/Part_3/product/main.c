#include <stdio.h>
#include <string.h>
#include "product.h"

int main() {
    char name[50];
    double price;
    int quantity;
    
    // Read inputs
    scanf("%s", name);
    scanf("%lf", &price);
    scanf("%d", &quantity);
    
    // TODO: Create a Product variable and initialize it with the input values
    // Hint: Use strcpy to copy the name into the struct's name field
    Product p;
    strcpy(p.name, name);
    p.price = price;
    p.quantity = quantity;
    
    // TODO: Call display_by_value with the Product
    display_by_value(p);
    
    // TODO: Call display_by_pointer with a pointer to the Product
    display_by_pointer(&p);
    
    return 0;
}