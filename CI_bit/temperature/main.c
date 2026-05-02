#include <stdio.h>
#include "temperature.h"

int main() {
    double initial_celsius, adjustment;
    scanf("%lf", &initial_celsius);
    scanf("%lf", &adjustment);
    
    // TODO: Create a Temperature struct and initialize it with initial_celsius
    Temperature temperature;
    temperature.celsius = initial_celsius;

    // TODO: Call temp_display to show the starting temperature
    temp_display(&temperature);
    
    // TODO: Call temp_adjust to modify the temperature by the adjustment amount
    temp_adjust(&temperature, adjustment);
    
    // TODO: Call temp_display again to show the updated temperature
    temp_display(&temperature);
    
    // TODO: Print the Fahrenheit conversion using temp_to_fahrenheit
    // Format: "Fahrenheit: %.1fF\n"
    printf("Fahrenheit: %.1fF\n", temp_to_fahrenheit(&temperature));
    
    return 0;
}
