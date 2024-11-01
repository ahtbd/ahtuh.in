#include <stdio.h>

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

    // Determine the quadrant based on the angle
    if (angle > 0 && angle < 90) {
        printf("The line lies in Quadrant I.\n");
    } else if (angle > 90 && angle < 180) {
        printf("The line lies in Quadrant II.\n");
    } else if (angle > 180 && angle < 270) {
        printf("The line lies in Quadrant III.\n");
    } else if (angle > 270 && angle < 360) {
        printf("The line lies in Quadrant IV.\n");
    } else {
        printf("The line lies on an axis.\n");
    }

    return 0;
}
