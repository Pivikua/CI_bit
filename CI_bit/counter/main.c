#include <stdio.h>
#include "counter.h"

int main() {
    // Read input
    int starting_value;
    int num_increments;
    scanf("%d", &starting_value);
    scanf("%d", &num_increments);
    
    // TODO: Create a Counter and initialize it with starting_value
    Counter cntr;
    cntr.value = starting_value;
    
    // TODO: Call counter_increment the specified number of times
    for (int i = 0; i < num_increments; i++) {
        counter_increment(&cntr);
    }
    
    // TODO: Use counter_get to retrieve the final value and print it
    // Print format: "Final value: {result}"
    int final_value = counter_get(&cntr);
    printf("Final value: %d\n", final_value);
    
    return 0;
}