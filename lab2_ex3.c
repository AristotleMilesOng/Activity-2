#include <stdio.h>

int main(void) {
    float lbyec2a, engcal1, fndmath, fndstat;
    float gpa;
    int units_total = 12;

    printf("lbyec2a grade: ");
    scanf( "%f", &lbyec2a);

    printf("engcal1 grade: ");
    scanf( "%f", &engcal1);

    printf("fndmath grade: ");
    scanf( "%f", &fndmath);

    printf("fndstat grade: ");
    scanf( "%f", &fndstat);

    gpa = ((lbyec2a * 1) + (engcal1 * 3) + (fndmath * 5) + (fndstat * 3)) / units_total;

    printf("\nGPA = %.2f\n", gpa);

    return 0;

}