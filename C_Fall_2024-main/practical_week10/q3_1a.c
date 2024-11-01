#include <stdio.h>

int main() {
    int month, day;

    // Prompt the user to enter the month and day
    printf("Enter a month (use 1 for Jan, etc.): ");
    scanf("%d", &month);

    // Check if the entered month is valid
    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;  // Exit the program if the month is invalid
    }

    // Prompt the user to enter the day
    printf("Enter a day of the month: ");
    scanf("%d", &day);

    // Check if the entered day is valid
    if (day < 1 || day > 31) {
        printf("Invalid day entered.\n");
        return 1;  // Exit the program if the day is invalid
    }

    // Display a success message if both values are valid
    printf("You entered: Month %d, Day %d\n", month, day);
    return 0;
}
