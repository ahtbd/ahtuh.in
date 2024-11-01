#include <stdio.h>

int main() {
    int grade;
    
    // Get the numerical grade from the user
    printf("Enter the student's numerical grade: ");
    scanf("%d", &grade);

    // Determine the letter grade based on the numerical grade
    if (grade >= 90) {
        printf("Letter Grade: A\n");
    } else if (grade >= 80) {
        printf("Letter Grade: B\n");
    } else if (grade >= 70) {
        printf("Letter Grade: C\n");
    } else if (grade >= 60) {
        printf("Letter Grade: D\n");
    } else {
        printf("Letter Grade: F\n");
    }

    return 0;
}
