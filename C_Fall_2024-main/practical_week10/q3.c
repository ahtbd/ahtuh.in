#include <stdio.h>

int main() {
    float temperature;
    char unit;

    // Prompt the user to enter the temperature followed by the unit (f or c)
    printf("Enter temperature followed by unit (e.g., 98.6 f or 37.0 c): ");
    scanf("%f %c", &temperature, &unit);

    // Check the unit and perform the appropriate conversion
    if (unit == 'f' || unit == 'F') {
        // Convert Fahrenheit to Celsius
        float celsius = (5.0 / 9.0) * (temperature - 32.0);
        printf("%.2f Fahrenheit is equivalent to %.2f Celsius.\n", temperature, celsius);
    } else if (unit == 'c' || unit == 'C') {
        // Convert Celsius to Fahrenheit
        float fahrenheit = (9.0 / 5.0) * temperature + 32.0;
        printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", temperature, fahrenheit);
    } else {
        // Print an error message if the unit is neither 'f' nor 'c'
        printf("Invalid input! Please enter a valid unit ('f' or 'c').\n");
    }

    return 0;
}
