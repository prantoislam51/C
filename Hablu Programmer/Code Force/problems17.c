

#include <stdio.h>
int main() {
    // Input
    long long n;
    scanf("%lld", &n);
    long long minimumNumber = 0;
    long long power = 1;
    // Iterate through each digit of the given number
    while (n != 0) {
        int lastDigit = n % 10;
        n /= 10;
        // Invert digit if greater than 4, but handle the first digit differently
        if (n == 0 && lastDigit == 9) {
            // If the first digit is 9 and it's the only digit, keep it as it is
            minimumNumber = 9 * power + minimumNumber;
        } else {
            // Otherwise, replace digits greater than 4 with 9 - digit
            int invertedDigit = (lastDigit > 4) ? 9 - lastDigit : lastDigit;
            minimumNumber += invertedDigit * power;
        }
        power *= 10;
    }
    printf("%lld\n", minimumNumber);

    return 0;
}
