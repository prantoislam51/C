/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
// Problem 2: Print odd numbers from User
#include <stdio.h>
int main() {
    int n;
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);
    // Print odd numbers up to the entered number
    printf("Odd numbers up to %d: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("Odd Number Is: %d \n", i);
    }
    return 0;
}


