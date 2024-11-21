#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100 are: \n");

    for (int i = 2; i <= 100; i++) {
        int isPrime = 0;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 1;
                break;
            }
        }

        if (isPrime == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
