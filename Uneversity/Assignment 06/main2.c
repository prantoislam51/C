#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not a prime number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int lower, upper;
    // Input the range
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    // Iterate through the range and check for prime numbers
    for (int i = lower; i <= upper; i++) {
        if (i <= 1)
            continue; // Skip 0 and 1
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
