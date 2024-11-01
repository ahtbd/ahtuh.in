#include <stdio.h>

int main() {
    char opselect;      // Character variable for the operation selection
    float fnum, snum;

    // Prompt the user to enter two numbers
    printf("Please type in two numbers: ");
    scanf("%f %f", &fnum, &snum);

    // Display the menu for selecting an operation
    printf("Enter a select code:");
    printf("\n'a' for addition");
    printf("\n'm' for multiplication");
    printf("\n'd' for division : ");
    scanf(" %c", &opselect);  // Space before %c to consume any leftover whitespace

    // Use a switch statement to perform the operation based on the selected code
    switch (opselect) {
        case 'a':  // Addition case
            printf("The sum of the numbers entered is %.3f\n", fnum + snum);
            break;

        case 'm':  // Multiplication case
            printf("The product of the numbers entered is %.3f\n", fnum * snum);
            break;

        case 'd':  // Division case
            if (snum != 0.0) {
                printf("The first number divided by the second is %.3f\n", fnum / snum);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;

        default:  // Handle invalid codes
            printf("Invalid code entered! Please use 'a', 'm', or 'd'.\n");
            break;
    }

    return 0;
}
