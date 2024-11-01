#include <stdio.h>

int main() {
    int num1, num2;
    
    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Compare the numbers and print the largest
    if (num1 > num2)
        printf("Largest: %d\n", num1);
    else if (num2 > num1)
        printf("Largest: %d\n", num2);
    else
        printf("Both numbers are equal.\n");
    
    return 0;
}
