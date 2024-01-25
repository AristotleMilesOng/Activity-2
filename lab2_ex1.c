#include <stdio.h>

int main(void) {
    // Constants for conversion
    const float CM_PER_INCH = 2.54;
    const int INCHES_PER_FOOT = 12;

    // Variables present
    float centimeters;
    int feet;
    float inches;

    // Get inputs
    printf("Input Value: ");
    scanf("%f", &centimeters);

    // Convert centimeters to feet and inches
    feet = centimeters / (CM_PER_INCH * INCHES_PER_FOOT);
    inches = (centimeters / CM_PER_INCH) - (feet * INCHES_PER_FOOT);

    //print the results
    printf("%.1f centimeters is %d feet %.1f inches\n", centimeters, feet, inches);

    return 0;

}
