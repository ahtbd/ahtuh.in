#include <stdio.h>

int main() {
    float time, interestRate;

    // Prompt the user to enter the time the funds are left on deposit
    printf("Enter the time (in years) the funds are left on deposit: ");
    scanf("%f", &time);

    // Determine the interest rate based on the time on deposit
    if (time >= 5) {
        interestRate = 0.045;
    } else if (time >= 4) {
        interestRate = 0.04;
    } else if (time >= 3) {
        interestRate = 0.035;
    } else if (time >= 2) {
        interestRate = 0.03;
    } else if (time >= 1) {
        interestRate = 0.025;
    } else {
        interestRate = 0.02;
    }

    // Display the interest rate
    printf("The interest rate for %.2f years on deposit is: %.3f\n", time, interestRate);

    return 0;
}
