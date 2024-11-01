#include <stdio.h>
#include <math.h>  // For fmod function to normalize the angle

int main() {
    float angle;

    // Prompt the user to enter the angle
    printf("Enter an angle (in degrees): ");
    scanf("%f", &angle);

    // Normalize the angle to be within 0 to 360 degrees
    angle = fmod(angle, 360.0);
    if (angle < 0) {
        angle += 360.0;
    }

    // Determine the quadrant or axis based on the angle
    if (angle == 0) {
        printf("The line lies on the positive X-axis.\n");
    } else if (angle == 90) {
        printf("The line lies on the positive Y-axis.\n");
    } else if (angle == 180) {
        printf("The line lies on the negative X-axis.\n");
    } else if (angle == 270) {
        printf("The line lies on the negative Y-axis.\n");
    } else if (angle > 0 && angle < 90) {
        printf("The line lies in Quadrant I.\n");
    } else if (angle > 90 && angle < 180) {
        printf("The line lies in Quadrant II.\n");
    } else if (angle > 180 && angle < 270) {
        printf("The line lies in Quadrant III.\n");
    } else if (angle > 270 && angle < 360) {
        printf("The line lies in Quadrant IV.\n");
    }

    return 0;
}
// Normalizing the Angle: We normalize the angle to lie between 0 and 360 degrees using fmod(angle, 360.0) in case the user inputs a value outside this range. If the angle is negative, we add 360 to make it positive.
// Quadrant and Axis Detection: The program first checks if the angle matches specific values (0, 90, 180, or 270). If not, it determines the quadrant based on the angle's range.
// Additional Axis Information: If the angle matches specific values (0, 90, 180, or 270), the program prints the respective axis information.