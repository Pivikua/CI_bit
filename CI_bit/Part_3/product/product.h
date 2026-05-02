#ifndef PRODUCT_H
#define PRODUCT_H

// TODO: Define the Product struct with:
// - char name[50]
// - double price
// - int quantity

typedef struct {
    char name[50];
    double price;
    int quantity;
} Product;

// TODO: Declare display_by_value function that takes a Product by value
void display_by_value(Product p);

// TODO: Declare display_by_pointer function that takes a const Product *
void display_by_pointer(const Product *p);

#endif
