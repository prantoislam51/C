#include <stdio.h>

int main() {
    int start = 100;
    int end = 80;
    int sum = 0;

    // Reverse the number and find odd numbers
    for (int i = start; i >= end; i--) {
        // Check if reversed number is odd
        if (i % 2 != 0) {
            printf("%d is odd\n", i);
            sum += i; // Add to the sum
        }
    }
    printf("Sum of odd numbers: %d\n", sum);
    return 0;
}
