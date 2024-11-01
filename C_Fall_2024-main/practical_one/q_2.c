#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculating sum
    sum = num1 + num2;
    
    // Output the result
    printf("Sum: %d\n", sum);
    
    return 0;
}
