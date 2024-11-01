#include <stdio.h>

int main() {
    int year;
    float weight;
    float fee;
    char *weightClass;

    // Prompt the user to enter the model year and weight of the automobile
    printf("Enter the model year of the automobile: ");
    scanf("%d", &year);
    printf("Enter the weight of the automobile (in lbs): ");
    scanf("%f", &weight);

    // Determine the weight class and registration fee based on the year and weight
    if (year <= 1970) {
        // Weight classes for 1970 or earlier
        if (weight < 2700) {
            weightClass = "I";
            fee = 16.50;
        } else if (weight >= 2700 && weight <= 3800) {
            weightClass = "II";
            fee = 25.50;
        } else {
            weightClass = "III";
            fee = 46.50;
        }
    } else if (year >= 1971 && year <= 1979) {
        // Weight classes for 1971 to 1979
        if (weight < 2700) {
            weightClass = "I";
            fee = 27.00;
        } else if (weight >= 2700 && weight <= 3800) {
            weightClass = "II";
            fee = 30.50;
        } else {
            weightClass = "III";
            fee = 52.50;
        }
    } else { // For years 1980 or later
        if (weight < 3500) {
            weightClass = "I";
            fee = 35.50;
        } else {
            weightClass = "II";
            fee = 65.50;
        }
    }

    // Display the weight class and registration fee
    printf("Weight Class: %s\n", weightClass);
    printf("Registration Fee: $%.2f\n", fee);

    return 0;
}
// Explanation:
// Input: The program prompts the user to enter the model year and weight of the automobile.
// Condition Checking: It checks the model year to determine the appropriate fee and weight class based on the specified conditions:
// For years 1970 or earlier, it uses three weight categories.
// For years between 1971 and 1979, it has its own set of categories.
// For 1980 or later, it checks for two weight categories.
// Output: The program prints the weight class and the corresponding registration fee.
// Usage:
// Compile the program using a C compiler.
// Run the program and input the model year and weight when prompted.
// The program will output the appropriate weight class and registration fee based on the inputs.