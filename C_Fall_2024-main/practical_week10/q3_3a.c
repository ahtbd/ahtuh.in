#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Determine if the year is a leap year
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 10 != 0))) {
        printf("The year %d is a leap year.\n", year);
    } else {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
// Explanation:
// Input: The program prompts the user to enter a year.
// Leap Year Logic: The program checks if the year is divisible by 400 or if it is divisible by 4 but not by 10. If either condition is true, it prints that the year is a leap year; otherwise, it indicates that it is not.