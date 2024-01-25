#include <stdio.h>

int main(void) {
    float no1, no2, no3, no4;
    float sum, average, sumofsquares;

    printf("enter first number: ");
    scanf("%f", &no1);

    printf("enter second number: ");
    scanf("%f", &no2);

    printf("enter third number: ");
    scanf("%f", &no3);

    printf("enter fourth number: ");
    scanf("%f", &no4);

    sum = no1 + no2 + no3 + no4;
    average = sum / 4;
    sumofsquares = (no1 * no1) + (no2 * no2) + (no3 * no3) +(no4 * no4);

    printf("sum: %.2f\n", sum);
    printf("average: %.2f\n", average);
    printf("sum of squares: %.2f\n", sumofsquares);

    return 0;

}