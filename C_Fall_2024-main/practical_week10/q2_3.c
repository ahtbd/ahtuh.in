#include <stdio.h>

int main() {
    float temperature;
    char unit;

    // Prompt the user to enter the temperature followed by the unit (f or c)
    printf("Enter temperature followed by unit (e.g., 98.6 f or 37.0 c): ");
    scanf("%f %c", &temperature, &unit);

    // Use a switch statement to check the unit
    switch (unit) {
        case 'f':
        case 'F': {
            // Convert Fahrenheit to Celsius
            float celsius = (5.0 / 9.0) * (temperature - 32.0);
            printf("%.2f Fahrenheit is equivalent to %.2f Celsius.\n", temperature, celsius);
            break;
        }
        case 'c':
        case 'C': {
            // Convert Celsius to Fahrenheit
            float fahrenheit = (9.0 / 5.0) * temperature + 32.0;
            printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", temperature, fahrenheit);
            break;
        }
        default:
            // Print an error message if the unit is neither 'f' nor 'c'
            printf("Invalid input! Please enter a valid unit ('f' or 'c').\n");
            break;
    }

    return 0;
}
