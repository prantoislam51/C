/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 4: Calculate the sum of even numbers from User input data
#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    int sum = 0;
    for (int i = start; i <= end; i++) {
        printf("%d \n", i);
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("Sum of even numbers between %d and %d: %d\n", start, end, sum);
    return 0;
}
