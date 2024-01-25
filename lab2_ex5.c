#include <stdio.h>

int main() {
    const float USD_TO_CNY_RATE = 6.94;
    const float EUR_TO_USD_RATE = 1.10;
    const float USD_TO_GBP_RATE = 0.76;

    float usdAmount, cnyAmount, eurAmount, gbpAmount;

    printf("Input US Dollar: ");
    scanf("%f", &usdAmount);

    cnyAmount = usdAmount * USD_TO_CNY_RATE;
    eurAmount = usdAmount / EUR_TO_USD_RATE;
    gbpAmount = usdAmount * USD_TO_GBP_RATE;

    printf("Chinese Yuan: %.2f\n", cnyAmount);
    printf("Euro Dollar: %.2f\n", eurAmount);
    printf("British Pound: %.2f\n", gbpAmount);

    return 0;
}