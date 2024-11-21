

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Number of test cases
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int *roundNumbers = (int *)malloc(n * sizeof(int));
        int counter = 0;
        int powerOf10 = 1;
        int index = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            if (lastDigit != 0) {
                // Calculate the round number by multiplying the last digit by the appropriate power of 10 and add it to the array
                roundNumbers[index++] = lastDigit * powerOf10;
            }
            n /= 10;
            counter++;
            powerOf10 *= 10;
        }
        // Print the number of round numbers
        printf("%d\n", index);
 
        // Print each round number in the array
        for (int i = 0; i < index; i++) {
            printf("%d ", roundNumbers[i]);
        }
        printf("\n");

        // Free dynamically allocated memory
        free(roundNumbers);
    }
    return 0;
}
