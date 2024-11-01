#include <stdio.h>
#include <math.h> // For the sqrt() function

int main() {
    float a, b, c;   // Coefficients of the quadratic equation
    float discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt the user to enter the coefficients a, b, and c
    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if 'a' is zero; if yes, it's not a quadratic equation
    if (a == 0) {
        printf("The value of 'a' must not be zero for a quadratic equation.\n");
        return 1; // Exit the program
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, zero, or negative to find the roots
    if (discriminant > 0) {
        // Two distinct and real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Two equal and real roots
        root1 = -b / (2 * a);
        printf("The roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Complex (imaginary) roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
// Explanation:
// Input: The user is prompted to enter the coefficients 
// 𝑎
// a, 
// 𝑏
// b, and 
// 𝑐
// c.
// Validation: It checks if 
// 𝑎
// a is zero since a quadratic equation must have 
// 𝑎
// ≠
// 0
// a
// 
// =0.
// Discriminant Calculation: The program calculates the discriminant 
// 𝐷
// =
// 𝑏
// 2
// −
// 4
// 𝑎
// 𝑐
// D=b 
// 2
//  −4ac to determine the nature of the roots:
// If 
// 𝐷
// >
// 0
// D>0, the equation has two distinct real roots.
// If 
// 𝐷
// =
// 0
// D=0, the equation has two equal real roots.
// If 
// 𝐷
// <
// 0
// D<0, the equation has complex roots (imaginary).
// Root Calculation: Based on the value of the discriminant, the program calculates and prints the appropriate roots using the quadratic formula.
// Example Run:
// mathematica
// Copy code
// Enter the coefficients a, b, and c: 1 -3 2
// The roots are real and different.
// Root 1 = 2.00
// Root 2 = 1.00