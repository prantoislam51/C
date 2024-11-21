


#include <stdio.h>

int main() {
    int isPrime, stor= 0;;

    printf("Prime numbers between 1 and 300 are: \n");

    // Loop through numbers from 1 to 300
    for(int i = 2; i <= 100; i++) {
        isPrime = 1; // Assume the number is prime

        // Check if the current number is divisible by any number other than 1 and itself
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // If divisible, the number is not prime
                break;
            }
        }
        // If the number is prime, print it
        if(isPrime == 1) {
            printf("%d \n", i);
            stor = stor + i;
        }
    }
    printf("Total Sum of Prime Number: %d \n", stor);

    return 0;
}
