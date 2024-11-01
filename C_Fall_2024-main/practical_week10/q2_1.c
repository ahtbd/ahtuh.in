#include <stdio.h>

int main() {
    int code;

    // Prompt the user to enter the code number
    printf("Enter the code number (1-4) for the disk drive manufacturer: ");
    scanf("%d", &code);

    // Determine the manufacturer based on the code
    switch (code) {
        case 1:
            printf("Disk Drive Manufacturer: 3M Corporation\n");
            break;
        case 2:
            printf("Disk Drive Manufacturer: Maxell Corporation\n");
            break;
        case 3:
            printf("Disk Drive Manufacturer: Sony Corporation\n");
            break;
        case 4:
            printf("Disk Drive Manufacturer: Verbatim Corporation\n");
            break;
        default:
            printf("Invalid code! Please enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}
