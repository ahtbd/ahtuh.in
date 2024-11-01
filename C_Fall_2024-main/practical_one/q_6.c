#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swap logic
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Output the result
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
