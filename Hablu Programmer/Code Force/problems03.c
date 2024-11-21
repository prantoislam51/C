#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int y, w;
    scanf("%d %d", &y, &w);
    int total_outcomes = 6;

    int favorable_outcomes = total_outcomes - (y > w ? y : w) + 1;

    int gcd_value = gcd(favorable_outcomes, total_outcomes);

    favorable_outcomes /= gcd_value;
    total_outcomes /= gcd_value;

    printf("%d/%d\n", favorable_outcomes, total_outcomes);

    return 0;
}
