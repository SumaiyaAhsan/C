#include <stdio.h>
#include <math.h>

int main() {
    double a1, a2, a3, m, wavelength, angle1, angle2, angle3;

    printf("a1 (slit width in micrometers) = ");
    scanf("%lf", &a1);
    printf("a2 (slit width in micrometers) = ");
    scanf("%lf", &a2);
    printf("a3 (slit width in micrometers) = ");
    scanf("%lf", &a3);
    printf("m (order of diffraction) = ");
    scanf("%lf", &m);
    printf("Wavelength (in nanometers) = ");
    scanf("%lf", &wavelength);

    if (wavelength < 380 || wavelength > 750) {
        printf("Out of range. Please enter a wavelength between 380 nm and 750 nm.\n");
        return 0;
    }

    double factor = m * wavelength * 1e-9; // Convert wavelength to meters
    angle1 = factor / (a1 * 1e-6); // Convert a1 to meters
    angle2 = factor / (a2 * 1e-6); // Convert a2 to meters
    angle3 = factor / (a3 * 1e-6); // Convert a3 to meters

    if (fabs(angle1) > 1 || fabs(angle2) > 1 || fabs(angle3) > 1) {
        printf("Invalid input: diffraction angle exceeds the valid range for asin.\n");
        return 0;
    }

    // Calculate angles in radians
    angle1 = asin(angle1);
    angle2 = asin(angle2);
    angle3 = asin(angle3);

    // Convert angles to degrees
    printf("\nFirst Angle = %.2lf degrees\n", angle1 * (180.0 / M_PI));
    printf("Second Angle = %.2lf degrees\n", angle2 * (180.0 / M_PI));
    printf("Third Angle = %.2lf degrees\n", angle3 * (180.0 / M_PI));

    // Determine which slit bends the light most
    if (angle1 > angle2 && angle1 > angle3) {
        printf("\na1 slit bent the light most\n");
    } else if (angle2 > angle1 && angle2 > angle3) {
        printf("\na2 slit bent the light most\n");
    } else {
        printf("\na3 slit bent the light most\n");
    }

    return 0;
}
