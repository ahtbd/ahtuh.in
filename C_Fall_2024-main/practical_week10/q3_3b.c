#include <stdio.h>

int main() {
    int month, year, days;

    // Prompt the user to enter a month and year
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printf("Enter a year: ");
    scanf("%d", &year);

    // Validate the month input
    if (month < 1 || month > 12) {
        printf("Invalid month entered. Please enter a number between 1 and 12.\n");
        return 1; // Exit the program with an error code
    }

    // Determine the number of days in the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            // Check if the year is a leap year
            if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
                days = 29; // Leap year
            } else {
                days = 28; // Not a leap year
            }
            break;
        default:
            printf("Invalid month entered.\n");
            return 1; // Exit with an error code
    }

    // Display the number of days in the month
    printf("The number of days in month %d of year %d is %d.\n", month, year, days);
    return 0;
}

// Input Validation: The program first checks that the month entered is valid (1 through 12).
// Days Calculation: It uses a switch statement to determine the number of days in each month. If February is selected, it checks if the year is a leap year using the same logic as in part (a).
// Output: The program prints the number of days in the specified month and year.
