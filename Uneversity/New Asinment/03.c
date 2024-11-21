/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problemd No: 03 Write a program to find the number of and sum of all integers greater than 100 and loss than 200
// that are divisible by 7
#include <stdio.h>
int main() {
    int lower_bound, upper_bound;
    // User input
    printf("Enter the lower bound: ");
    scanf("%d", &lower_bound);
    printf("Enter the upper bound: ");
    scanf("%d", &upper_bound);
    int count = 0; 
    int sum = 0; 
    for (int num = lower_bound; num <= upper_bound; num++) {
        if (num % 7 == 0) {
            count++;
            sum += num;  
        }
    }
    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);

    return 0;
}

