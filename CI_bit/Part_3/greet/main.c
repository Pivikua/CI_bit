#include <stdio.h>
#include "greet.h"

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
}