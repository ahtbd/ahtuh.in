#include <stdio.h>

int main() {
    char marcode;

    // Prompt the user to enter a marital code
    printf("Enter a marital code (M, S, D, W): ");
    scanf(" %c", &marcode); // Notice the space before %c to consume any whitespace

    // Determine the marital status using a switch statement
    switch (marcode) {
        case 'M':
            printf("\nIndividual is married.\n");
            break;
        case 'S':
            printf("\nIndividual is single.\n");
            break;
        case 'D':
            printf("\nIndividual is divorced.\n");
            break;
        case 'W':
            printf("\nIndividual is widowed.\n");
            break;
        default:
            printf("\nAn invalid code was entered.\n");
            break;
    }

    return 0;
}
