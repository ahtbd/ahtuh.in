#include <stdio.h>

int main() {
    float P, R, T, SI;
    
    // Taking input
    printf("Enter the principal amount (P): ");
    scanf("%f", &P);
    printf("Enter the rate of interest (R): ");
    scanf("%f", &R);
    printf("Enter the time in years (T): ");
    scanf("%f", &T);
    
    // Calculating simple interest
    SI = (P * R * T) / 100;
    
    // Output the result
    printf("Simple Interest: %.2f\n", SI);
    
    return 0;
}
