#include <stdio.h>

int main() {
    int month, day;

    // Prompt the user to enter the month
    printf("Enter a month (use 1 for Jan, etc.): ");
    if (scanf("%d", &month) != 1) {  // Check if input is a valid integer
        printf("Invalid input! Please enter an integer for the month.\n");
        return 1;
    }

    // Validate the entered month
    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;
    }

    // Prompt the user to enter the day
    printf("Enter a day of the month: ");
    if (scanf("%d", &day) != 1) {  // Check if input is a valid integer
        printf("Invalid input! Please enter an integer for the day.\n");
        return 1;
    }

    // Check if the entered day is valid
    if (day < 1 || day > 31) {
        printf("Invalid day entered.\n");
        return 1;
    }

    printf("You entered: Month %d, Day %d\n", month, day);
    return 0;
}
