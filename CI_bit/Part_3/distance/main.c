#include <stdio.h>
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
}
